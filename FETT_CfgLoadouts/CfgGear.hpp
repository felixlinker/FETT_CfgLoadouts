class B_BasicGear : GearClass {
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

class I_BasicGear : B_BasicGear {
	nightvision_pool[] = {"NVGoggles_INDEP"};
	radio_pool[] = {"tf_anprc148jem"};
};

class B_NormalSoldierGear : B_BasicGear {
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

class I_NormalSoldierGear : I_BasicGear {
	helmet_pool[] = {"H_HelmetIA"};

};

class B_NormalSoldierBinocGear : B_NormalSoldierGear {
	binocular_pool[] = {"Binocular"};
};

class I_NormalSoldierBinocGear : I_NormalSoldierGear {
	binocular_pool[] = {"Binocular"};
};

class B_NormalSoldierGPSGear : B_NormalSoldierBinocGear {
	gps_pool[] = {"b_itemGPS_FT"};
};

class I_NormalSoldierGPSGear : I_NormalSoldierBinocGear {
	gps_pool[] = {"i_itemGPS_FT"};
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

class I_AdvancedSoldierGear : I_NormalSoldierGPSGear {
	binocular_pool[] = {"Rangefinder"};
};

class B_AdvancedSoldierGear_noHelmet : B_AdvancedSoldierGear {
	helmet_pool[] = {};
};

class I_AdvancedSoldierGear_noHelmet : I_AdvancedSoldierGear {
	helmet_pool[] = {};
};

class B_OfficerGear : B_AdvancedSoldierGear {
	helmet_pool[] = {
		"H_Beret_blk",
		"H_Beret_Colonel",
		"H_MilCap_mcamo"
	};
};

class I_OfficerGear : I_AdvancedSoldierGear {
	helmet_pool[] = {"H_MilCap_dgtl","H_Beret_blk"};
};

class B_SOFSoldierGear : B_AdvancedSoldierGear {
	helmet_pool[] = {
		// "H_HelmetB_light",
		// "H_HelmetB_light_desert",
		// "H_HelmetB_light_grass",
		// "H_HelmetB_light_sand",
		// "H_HelmetB_light_snakeskin",
		"H_Watchcap_blk",
		"H_Watchcap_khk",
		"H_Watchcap_sgg",
		"H_Booniehat_mcamo",
		"H_Booniehat_khk_hs",
		"H_Bandanna_khk_hs",
		"H_Bandanna_mcamo",
		"H_Cap_tan_specops_US",
		"H_Cap_oli_hs"
	};
};

class I_SOFSoldierGear : I_AdvancedSoldierGear {
	helmet_pool[] = {
		"H_Bandanna_khk_hs",
		"H_Watchcap_blk",
		"H_Watchcap_camo",
		"H_Booniehat_khk_hs",
		"H_Booniehat_dgtl",
		"H_Cap_oli_hs",
		"H_Cap_blk_Raven",
		"H_Shemag_olive_hs"
	};
};

class B_CrewGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_HelmetCrew_0"};
};

class I_CrewGear : I_NormalSoldierGPSGear {
	helmet_pool[] = {"H_HelmetCrew_I"};
};

class B_PilotGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetFighter_B"};
};

class I_PilotGear : I_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetFighter_I"};
};

class B_HeliPilotGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetHeli_B"};
};

class I_HeliPilotGear : I_NormalSoldierGPSGear {
	helmet_pool[] = {"H_PilotHelmetFighter_I"};
};

class B_HeliCrewGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_CrewHelmetHeli_B"};
};

class I_HeliCrewGear : I_NormalSoldierGPSGear {
	helmet_pool[] = {"H_CrewHelmetHeli_I"};
};

class B_LogisticsGear : B_NormalSoldierGPSGear {
	helmet_pool[] = {"H_HelmetB_black"};
};

class I_LogisticsGear : I_NormalSoldierGPSGear {
	helmet_pool[] = {"H_MilCap_dgtl"};
};
