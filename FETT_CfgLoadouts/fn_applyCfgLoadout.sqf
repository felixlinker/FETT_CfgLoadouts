params [["_class","",[""]],["_faction","",[""]],["_obj",player,[objNull]]];

if (_class == "") then {
	_class = typeOf _obj;
};

if (_faction == "") then {
	_faction = getText (configFile >> "CfgVehicles" >> typeOf _obj >> "faction");
};

private "_loadout";
_loadout = missionConfigFile >> "CfgLoadouts" >> _faction >> _class;
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

// Delayed execution for server synchronization
[{
	params ["_args","_pfh"];
	_args call FETT_fnc_giveLoadout;
	[_pfh] call CBA_fnc_removePerFramehandler;
},0,[_loadout,_faction,_obj]] call CBA_fnc_addPerFramehandler;
