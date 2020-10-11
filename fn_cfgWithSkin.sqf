params [["_basePath", configNull, [configNull]], ["_skin", "", [""]]];

if (isClass _basePath) then {
	private _extended = _basePath >> _skin;
	if (isNull (_extended)) then {
		private _names = (configHierarchy _basePath) apply { configName _x };
		_names pushBack _skin;
		["'%1' does not exist", _names joinString " >> "] call BIS_fnc_error;
		// Get random entry to not break subsequent scripts
		_basePath select 0
	} else {
		_extended
	};
} else {
	_basePath
};
