#define SELECTRANDOM(ARR) (ARR select (floor random count ARR))

private ["_class","_obj"];
_class = _this select 0;
_obj = if (count _this > 1) then {_this select 1} else {player};

if (typeName _class != typeName "" || typeName _obj != typeName objNull) exitWith {
    diag_log "W Loadout error: wrong params given";
};

private "_loadout";
_loadout = missionConfigFile >> "CfgLoadouts" >> _class;
if (!isClass _loadout) exitWith {
    diag_log format ["W Loadout error: class %1 not found",_class];
};

removeAllWeapons _obj;
removeAllItems _obj;
removeAllAssignedItems _obj;
removeUniform _obj;
removeVest _obj;
removeBackpack _obj;
removeHeadgear _obj;
removeGoggles _obj;

// Add container
private ["_container","_addedContainer"];
// Add uniform
_container = getArray (_loadout >> "Container" >> "uniform_pool");
_addedContainer = ["","",""];
if (count _container != 0) then {
    private "_uniform";
    _uniform = SELECTRANDOM(_container);
    _obj addUniform _uniform;
    _addedContainer set [0,_uniform];
};

// Add vest
_container = getArray (_loadout >> "Container" >> "vest_pool");
if (count _container != 0) then {
    private "_vest";
    _vest = SELECTRANDOM(_container);
    _obj addVest _vest;
    _addedContainer set [1,_vest];
};

// Add backpack
_container = getArray (_loadout >> "Container" >> "backpack_pool");
if (count _container != 0) then {
    private "_backpack";
    _backpack = SELECTRANDOM(_container);
    _obj addBackpack _backpack;
    _addedContainer set [2,_backpack];
};

// Add gear
{
    _gear = getArray (_loadout >> "Gear" >> _x);
    if (count _gear != 0) then {
        _obj addWeapon SELECTRANDOM(_gear);
    };
} forEach ["helmet_pool","goggle_pool","nightvision_pool","binocular_pool","map_pool","gps_pool","radio_pool","compass_pool","clock_pool"];

// Add weapons and get magazines
private ["_magazinesPrimary","_magazinesSecondary","_magazinesHandgun","_magazinesAdditionally"];
_magazinesPrimary = [];
_magazinesSecondary = [];
_magazinesHandgun = [];
_magazinesAdditionally = [];
{
    private ["_weaponPath","_weapons","_weaponType","_weaponMagazinesArray"];
    _weaponPath = _loadout >> "Weapons" >> _x;
    _weapons = getArray (_weaponPath >> "weapon_pool");
    _weaponType = _x;
    _weaponMagazinesArray = [];
    if (count _weapons != 0) then {
        // Add weapon
        _obj addWeapon SELECTRANDOM(_weapons);

        // Get the type of the weapon
        _addFnc = {};
        switch _weaponType do {
            case "primaryWeapon": {
                _addFnc = { _obj addPrimaryWeaponItem _this };
                _weaponMagazinesArray = _magazinesPrimary; // set the pointer
            };
            case "secondaryWeapon": {
                _addFnc = { _obj addSecondaryWeaponItem _this };
                _weaponMagazinesArray = _magazinesSecondary; // set the pointer
            };
            case "handGun": {
                _addFnc = { _obj addHandgunItem _this };
                _weaponMagazinesArray = _magazinesHandgun; // set the pointer
            };
        };

        // Add one magazine to the weapon
        (getText (_weaponPath >> "magazine")) call _addFnc;

        // Add attachments
        {
            private "_attachments";
            _attachments = getArray (_weaponPath >> _x);
            if (count _attachments != 0) then {
                private "_attachment";
                _attachment = SELECTRANDOM(_attachments);
                _attachment call _addFnc;
            };
        } forEach ["muzzleAttachment_pool","barrelAttachment_pool","weaponRestingAttachment_pool","scope_pool"];

        // Save the magazines
        private ["_magazinesMax","_magazineTracer","_tracersEvery","_magazine"];
        _magazinesMax = getNumber (_weaponPath >> "magazinesMax");
        _magazineTracer = getText (_weaponPath >> "magazineTracer");
        _tracersEvery = if (_magazineTracer == "") then {
            _magazinesMax + 1
        }
        else {
            getNumber (_weaponPath >> "magazinesTracerEvery")
        };
        _magazine = getText (_weaponPath >> "magazine");

        for "_i" from 1 to _magazinesMax do {
            if (_i % _tracersEvery == 0) then {
                _weaponMagazinesArray pushBack _magazineTracer;
            }
            else {
                _weaponMagazinesArray pushBack _magazine;
            };
        };

        {
            if (typeName _x == typeName []) then {
                for "_i" from 1 to (_x select 1) do {
                    _magazinesAdditionally pushBack (_x select 0);
                };
            }
            else {
                _magazinesAdditionally pushBack _x;
            };
        } forEach (getArray (_weaponPath >> "optional"));
    };
} forEach ["secondaryWeapon","handGun","primaryWeapon"];

// Get medic material, grenades and other
private ["_medicMaterial","_grenades","_other","_combined"];
_medicMaterial = getArray (_loadout >> "Items" >> "medicMaterial");
_grenades = getArray (_loadout >> "Items" >> "grenades");
_other = getArray (_loadout >> "Items" >> "other");
_combined = [_medicMaterial,_grenades,_other];
{
    private "_array";
    _array = _x;
    {
        private "_transformed";
        _transformed = [];
        if (typeName _x == typeName []) then {
            for "_i" from 1 to (_x select 1) do {
                _transformed pushBack (_x select 0);
            };
        }
        else {
            _transformed pushBack _x;
        };
        _array set [_forEachIndex,_transformed];
    } forEach _array;

    private "_appended";
    _appended = [];
    {
        _appended append _x;
    } forEach _array;

    _combined set [_forEachIndex,_appended];
} forEach _combined;
_medicMaterial = _combined select 0;
_grenades = _combined select 1;
_other = _combined select 2;

// Add all the items
{
    _obj addItem _x;
} forEach _medicMaterial;

{
    _obj addItem _x;
} forEach _grenades;

{
    _obj addItem _x;
} forEach _other;

{
    _obj addItem _x;
} forEach _magazinesAdditionally;

// Add all magazines
private ["_biggestArrayCount","_allMagazines"];
_biggestArrayCount = 0;
_allMagazines = [];
{
    if (count _x != 0) then {
        _allMagazines pushBack _x;
    };
} forEach [_magazinesPrimary,_magazinesSecondary,_magazinesHandgun];

{
    if (count _x > _biggestArrayCount) then {
        _biggestArrayCount = count _x;
    };
} forEach _allMagazines;

{
    private ["_factor","_new"];
    _factor = floor (_biggestArrayCount / count _x);
    _new = [];
    for "_i" from 0 to (_biggestArrayCount - 1) do {
        _new set [_i,""];
    };

    {
        _new set [_forEachIndex * _factor,_x];
    } forEach _x;

    _allMagazines set [_forEachIndex,_new];
} forEach _allMagazines;

for "_i" from 0 to (_biggestArrayCount - 1) do {
    {
        if (_x select _i != "") then {
            _obj addItem (_x select _i);
        };
    } forEach _allMagazines;
};

_obj selectWeapon (primaryWeapon _obj);
