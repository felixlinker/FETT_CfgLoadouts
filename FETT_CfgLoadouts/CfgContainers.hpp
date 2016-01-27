// "V_Rangemaster_belt",
// "V_TacVest_blk",
// "V_BandollierB_rgr",
// "V_Chestrig_rgr", // auch mit _khk
// "V_PlateCarrierGL_rgr", // auch mit: _blk, _mtp, hat mehr Platz
// "V_PlateCarrierSpec_rgr" // light, auch mit: _blk, _mtp
// "V_PlateCarrier1_rgr",
// "V_PlateCarrier2_rgr" // Mehr Armor, Mehr gewicht als 1

// "B_Kitbag_mcamo", // auch mit _rgr
// "B_FieldPack_cbr", // Auch mit _blk
// "B_Carryall_oli", // auch mit _mcamo, _cbr
// "B_AssaultPack_rgr" // auch mit _blk, _mcamo

class B_Uniforms : ContainerClass {
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
	uniform_pool[] = {
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam_tshirt",
		"U_B_CombatUniform_mcam"
	};
};

class B_SmallContainer : B_Uniforms {
	backpack_pool[] = {
		"B_AssaultPack_rgr",
		"B_AssaultPack_mcamo"
	};
};

class B_LightContainer : B_SmallContainer {
	vest_pool[] = {"V_PlateCarrier1_rgr"};
};

class B_ChestRigContainer : B_Uniforms {
	vest_pool[] = {
		"V_Chestrig_rgr",
		"V_Chestrig_khk"
	};
	backpack_pool[] = {"B_FieldPack_oli"};
};

class B_ChestRigBigContainer : B_ChestRigContainer {
	backpack_pool[] = {
		"B_Carryall_oli",
		"B_Carryall_mcamo"
	};
};

class B_StandardContainer : B_SmallContainer {
	vest_pool[] = {"V_PlateCarrier2_rgr"};
};

class B_MediumContainer : B_StandardContainer {
	backpack_pool[] = {
		"B_Kitbag_mcamo",
		"B_Kitbag_rgr"
	};
};

class B_HeavySoldierContainer : B_SmallContainer {
	uniform_pool[] = {
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam"
	};
	vest_pool[] = {"V_PlateCarrierGL_rgr"};
};

class B_HeavyLightSoldierContainer : B_SmallContainer {
	uniform_pool[] = {
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam"
	};
	vest_pool[] = {"V_PlateCarrier1_rgr"};
};

class B_RadioRuckContainer : B_LightContainer {
	helmet_pool[] = {
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin"
	};
	backpack_pool[] = {
		"B_Kitbag_mcamo",
		"B_Kitbag_rgr"
	};
};

class B_RadioRuckContainerLead : B_RadioRuckContainer {
	helmet_pool[] = {
		"H_Beret_blk",
		"H_Beret_Colonel",
		"H_MilCap_mcamo"
	};
};

class B_SpecOpContainer : ContainerClass {
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
	uniform_pool[] = {"U_B_survival_uniform"};
	vest_pool[] = {"V_Chestrig_rgr","V_Chestrig_khk"};
	backpack_pool[] = {"B_FieldPack_cbr"};
};

class B_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_B_FullGhillie_sard","U_B_FullGhillie_lsh"};
	vest_pool[] = {"V_Chestrig_rgr"};
};

class B_CrewContainer : ContainerClass {
	helmet_pool[] = {"H_HelmetCrew_0"};
	uniform_pool[] = {"U_B_CombatUniform_mcam_tshirt"};
	vest_pool[] = {"V_BandollierB_blk"};
};

class B_JetPilotContainer : ContainerClass {
	helmet_pool[] = {"H_PilotHelmetFighter_B"};
	uniform_pool[] = {"U_B_PilotCoveralls"};
	backpack_pool[] = {"ACE_NonSteerableParachute"};
};

class B_HeliPilotContainer : B_SmallContainer {
	helmet_pool[] = {"H_PilotHelmetHeli_B"};
	uniform_pool[] = {"U_B_HeliPilotCoveralls"};
	vest_pool[] = {"V_TacVest_blk"};
};

class B_HeliCrewContainer : B_HeliPilotContainer {
	helmet_pool[] = {"H_CrewHelmetHeli_B"};
	backpack_pool[] = {};
};

class B_LogisticianContainer : ContainerClass {
	helmet_pool[] = {"H_HelmetB_black"};
	uniform_pool[] = {"U_I_G_Story_Protagonist_F"};
	vest_pool[] = {"V_TacVest_blk"};
	backpack_pool[] = {"B_FieldPack_blk"};
};

class I_Uniforms : ContainerClass {
	helmet_pool[] = {"H_HelmetIA"};
	uniform_pool[] = {
		"U_I_CombatUniform",
		"U_I_CombatUniform_shortsleeve"
	};
};

class I_SmallContainer : I_Uniforms {
	backpack_pool[] = {
		"B_AssaultPack_dgtl",
		"B_AssaultPack_khk"
	};
};

class I_LightContainer : I_SmallContainer {
	vest_pool[] = {"V_PlateCarrierIA1_dgtl"};
};

class I_SOFContainer : I_LightContainer {
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
	backpack_pool[] = {"B_FieldPack_oli"};
};

class I_ChestRigContainer : I_Uniforms {
	vest_pool[] = {
		"V_Chestrig_blk",
		"V_Chestrig_rgr"
	};
	backpack_pool[] = {"B_FieldPack_oli"};
};

class I_ChestRigBigContainer : I_ChestRigContainer {
	backpack_pool[] = {"B_Carryall_oli"};
};

class I_StandardContainer : I_SmallContainer {
	vest_pool[] = {"V_PlateCarrierIA2_dgtl"};
};

class I_MediumContainer : I_StandardContainer {
	backpack_pool[] = {"B_Kitbag_rgr"};
};

class I_HeavySoldierContainer : I_SmallContainer {
	vest_pool[] = {
		"V_PlateCarrierIAGL_dgtl",
		"V_PlateCarrierIAGL_oli"
	};
};

class I_RadioRuckContainer : I_LightContainer {
	backpack_pool[] = {"B_Kitbag_rgr"};
};

class I_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_I_FullGhillie_sard","U_I_FullGhillie_lsh"};
	vest_pool[] = {"V_Chestrig_oli"};
};

class I_CrewContainer : ContainerClass {
	helmet_pool[] = {"H_HelmetCrew_I"};
	uniform_pool[] = {"U_I_CombatUniform_shortsleeve"};
	vest_pool[] = {"V_BandollierB_oli"};
};

class I_JetPilotContainer : ContainerClass {
	helmet_pool[] = {"H_PilotHelmetFighter_I"};
	uniform_pool[] = {"U_I_pilotCoveralls"};
	backpack_pool[] = {"ACE_NonSteerableParachute"};
};

class I_HeliPilotContainer : I_SmallContainer {
	helmet_pool[] = {"H_PilotHelmetFighter_I"};
	uniform_pool[] = {"U_I_HeliPilotCoveralls"};
	vest_pool[] = {"V_TacVest_blk"};
};

class I_HeliCrewGear : I_HeliPilotContainer {
	helmet_pool[] = {"H_CrewHelmetHeli_I"};
	backpack_pool[] = {};
};

class I_OfficerContainer : I_SmallContainer {
	helmet_pool[] = {"H_MilCap_dgtl","H_Beret_blk"};
	uniform_pool[] = {"U_I_OfficerUniform"};
};

class O_Uniforms : ContainerClass {
	helmet_pool[] = {"H_HelmetO_ocamo"};
	uniform_pool[] = {"U_O_CombatUniform_ocamo"};
};

class O_SmallContainer : O_Uniforms {
	backpack_pool[] = {
		"B_AssaultPack_ocamo",
		"B_AssaultPack_cbr"
	};
};

class O_MediumContainer : O_Uniforms {
	backpack_pool[] = {
		"B_FieldPack_ocamo",
		"B_FieldPack_cbr"
	};
};

class O_BigContainer : O_Uniforms {
	backpack_pool[] = {
		"B_Carryall_cbr",
		"B_Carryall_ocamo"
	};
};

class O_GrenContainer : O_SmallContainer {
	vest_pool[] = {"V_HarnessOGL_brn"};
};

class O_StandardContainer : O_MediumContainer {
	vest_pool[] = {"V_HarnessO_brn"};
};

class O_LightContainer : O_SmallContainer {
	vest_pool[] = {"V_HarnessO_brn"};
};

class O_RadioRuckContainer : O_GrenContainer {
	helmet_pool[] = {"H_HelmetSpecO_ocamo"};
	backpack_pool[] = {
		"B_FieldPack_ocamo",
		"B_FieldPack_cbr"
	};
};

class O_SOFContainer : O_MediumContainer {
	helmet_pool[] = {
		"H_Bandanna_gry",
		"H_Bandanna_sand",
		"H_Watchcap_cbr",
		"H_Watchcap_khk",
		"H_Booniehat_tan",
		"H_Booniehat_khk_hs",
		"H_Cap_brn_SPECOPS",
		"H_MilCap_ocamo",
		"H_ShemagOpen_tan"
	};
	vest_pool[] = {"V_Chestrig_rgr"};
};

class O_ChestRigBigContainer : O_BigContainer {
	vest_pool[] = {"V_Chestrig_rgr"};
};

class O_LeaderContainer : O_SmallContainer {
	helmet_pool[] = {"H_MilCap_ocamo","H_Beret_blk"};
	uniform_pool[] = {"U_O_OfficerUniform_ocamo"};
	vest_pool[] = {"V_BandollierB_cbr"};
};

class O_CrewContainer : O_Uniforms {
	helmet_pool[] = {"H_HelmetCrew_O"};
	vest_pool[] = {"V_BandollierB_cbr"};
};

class O_JetPilotContainer : ContainerClass {
	helmet_pool[] = {"H_PilotHelmetFighter_O"};
	uniform_pool[] = {"U_O_PilotCoveralls"};
	backpack_pool[] = {"B_Parachute"};
};

class O_HeliPilotContainer : O_JetPilotContainer {
	helmet_pool[] = {"H_PilotHelmetHeli_O"};
	vest_pool[] = {"V_TacVest_khk"};
};

class O_HeliCrewContainer : O_HeliPilotContainer {
	helmet_pool[] = {"H_CrewHelmetHeli_O"};
	backpack_pool[] = {};
};

class O_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_O_FullGhillie_ard","U_O_FullGhillie_lsh","U_O_FullGhillie_sard"};
	vest_pool[] = {"V_Chestrig_rgr"};
};
