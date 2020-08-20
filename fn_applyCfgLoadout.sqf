params [["_class","",[""]],["_obj",player,[objNull]]];

if (_class == "") then {
	_class = typeOf _obj;
};

private "_loadout";
_loadout = missionConfigFile >> "CfgLoadouts" >> _class;
if (!isClass _loadout) exitWith {
	["Loadout error: class %1 not found",_class] call BIS_fnc_error;
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
	_this call FETT_fnc_giveLoadout;
} ,[_loadout,_obj]] call CBA_fnc_execNextFrame;
