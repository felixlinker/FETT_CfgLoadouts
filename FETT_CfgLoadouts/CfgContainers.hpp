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

class B_SOFSoldierContainer : B_SmallContainer {
	vest_pool[] = {"V_Chestrig_rgr"};
};

class B_JetContainer : ContainerClass {
	uniform_pool[] = {"U_B_PilotCoveralls"};
	vest_pool[] = {"V_TacVest_blk"};
};

class B_RadioRuckContainer : B_LightContainer {
	backpack_pool[] = {"tf_rt1523g_big"};
};

class B_SpecOpContainer : ContainerClass {
	uniform_pool[] = {"U_B_survival_uniform"};
	vest_pool[] = {"V_Chestrig_rgr","V_Chestrig_khk"};
	backpack_pool[] = {"B_FieldPack_cbr"};
};

class B_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_B_FullGhillie_sard","U_B_FullGhillie_lsh"};
	vest_pool[] = {"V_Chestrig_rgr"};
};

class B_CrewContainer : ContainerClass {
	uniform_pool[] = {"U_B_CombatUniform_mcam_tshirt"};
	vest_pool[] = {"V_BandollierB_blk"};
};

class B_JetPilotContainer : ContainerClass {
	uniform_pool[] = {"U_B_PilotCoveralls"};
	backpack_pool[] = {"ACE_NonSteerableParachute"};
};

class B_HeliPilotContainer : ContainerClass {
	uniform_pool[] = {"U_B_HeliPilotCoveralls"};
	vest_pool[] = {"V_TacVest_blk"};
	backpack_pool[] = {"tf_rt1523g_black"};
};

class B_LogisticianContainer : ContainerClass {
	uniform_pool[] = {"U_I_G_Story_Protagonist_F"};
	vest_pool[] = {"V_TacVest_blk"};
	backpack_pool[] = {"B_FieldPack_blk"};
};

class I_Uniforms : ContainerClass {
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
	backpack_pool[] = {"tf_anprc155"};
};

class I_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_I_FullGhillie_sard","U_I_FullGhillie_lsh"};
	vest_pool[] = {"V_Chestrig_oli"};
};

class I_CrewContainer : ContainerClass {
	uniform_pool[] = {"U_I_CombatUniform_shortsleeve"};
	vest_pool[] = {"V_BandollierB_oli"};
};

class I_JetPilotContainer : ContainerClass {
	uniform_pool[] = {"U_I_pilotCoveralls"};
	backpack_pool[] = {"ACE_NonSteerableParachute"};
};

class I_HeliPilotContainer : ContainerClass {
	uniform_pool[] = {"U_I_HeliPilotCoveralls"};
	vest_pool[] = {"V_TacVest_blk"};
	backpack_pool[] = {"tf_anprc155_coyote"};
};

class I_OfficerContainer : I_LightContainer {
	uniform_pool[] = {"U_I_OfficerUniform"};
	backpack_pool[] = {"tf_anprc155"};
};

class O_Uniforms : ContainerClass {
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

class O_ChestrigContainer : O_MediumContainer {
	vest_pool[] = {"V_Chestrig_rgr"};
};

class O_ChestRigBigContainer : O_BigContainer {
	vest_pool[] = {"V_Chestrig_rgr"};
};

class O_LeaderContainer : ContainerClass {
	uniform_pool[] = {"U_O_OfficerUniform_ocamo"};
	vest_pool[] = {"V_BandollierB_cbr"};
	backpack_pool[] = {"tf_mr3000"};
};

class O_CrewContainer : O_Uniforms {
	vest_pool[] = {"V_BandollierB_cbr"};
};

class O_JetPilotContainer : ContainerClass {
	uniform_pool[] = {"U_O_PilotCoveralls"};
	backpack_pool[] = {"B_Parachute"};
};

class O_HeliPilotContainer : O_JetPilotContainer {
	vest_pool[] = {"V_TacVest_khk"};
};

class O_GhillieContainer : ContainerClass {
	uniform_pool[] = {"U_O_FullGhillie_ard","U_O_FullGhillie_lsh","U_O_FullGhillie_sard"};
	vest_pool[] = {"V_Chestrig_rgr"};
};
