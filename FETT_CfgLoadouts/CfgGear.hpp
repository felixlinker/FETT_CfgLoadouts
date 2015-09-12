class BasicGear : GearClass {
	helmet_pool[] = {};
    goggle_pool[] = {};
    nightvision_pool[] = {"NVGoggles"};
    binocular_pool[] = {};
    map_pool[] = {"ItemMap"};
    gps_pool[] = {};
    radio_pool[] = {"tf_anprc152"};
    compass_pool[] = {"ItemCompass"};
    clock_pool[] = {"ItemWatch"};
};

class B_NormalSoldierGear : BasicGear {
	helmet_pool[] = {
		// "H_Beret_Colonel", // auch mit _blk, _02 (EU),
		// "H_MilCap_mcamo",
		// "H_Watchcap_blk", // Beanie, auch mit _camo, _cbr, _camo, _khk, _sgg
		// "H_HelmetCrew_B",
		// "H_PilotHelmetHeli_B",
		// "H_CrewHelmetHeli_B",
		// "H_PilotHelmetFighter_B",
		// "H_Cap_headphones",
		// "H_HelmetB_light", // SOF, auch mit _black, _desert, _grass, _sand, _snakeskin
		// "H_HelmetSpecB_blk" // Mit Mikrofon, auch mit _paint1, _paint2, _sand, _snakeskin
		"H_HelmetB", // auch mit _black, _camo
		"H_HelmetB_desert",
		"H_HelmetB_grass"
	};
};

class B_NormalSoldierBinocGear : B_NormalSoldierGear {
	binocular_pool[] = {"Binocular"};
};

class B_NormalSoldierGPSGear : B_NormalSoldierBinocGear {
	gps_pool[] = {"b_itemGPS_FT"};
};

class B_AdvancedSoldierGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin"
	};
	binocular_pool[] = {"Rangefinder"};
};

class B_AdvancedSoldierGear_noHelmet : B_AdvancedSoldierGear {
	helmet_pool[] = {};
};

class B_OfficerGear : B_AdvancedSoldierGear {
	helmet_pool[] = {
		"H_Beret_blk",
		"H_Beret_Colonel",
		"H_MilCap_mcamo"
	};
};

class B_SOFSoldierGear : B_AdvancedSoldierGear {
	helmet_pool[] = {
		"H_HelmetB_light",
		"H_HelmetB_light_desert",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin",
		"H_Watchcap_blk",
		"H_Watchcap_khk",
		"H_Watchcap_sgg"
	};
};

class B_CrewGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_HelmetCrew_0"};
};

class B_PilotGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetFighter_B"};
};

class B_HeliPilotGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetHeli_B"};
};

class B_HeliCrewGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_CrewHelmetHeli_B"};
};

class B_LogisticsGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_HelmetB_black"};
};
