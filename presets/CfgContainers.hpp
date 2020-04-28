
#define B_B_SMALL {"B_AssaultPack_rgr","B_AssaultPack_mcamo"}
#define B_B_MED {"B_Kitbag_mcamo","B_Kitbag_rgr"}
#define B_B_LARGE {"B_Carryall_mcamo"}

#define B_V_CARRIER {"V_Chestrig_rgr"}
#define B_V_LIGHT {"V_PlateCarrier1_rgr"}
#define B_V_STD {"V_PlateCarrier2_rgr"}
#define B_V_HEAVY {"V_PlateCarrierSpec_rgr"}
#define B_V_HEAVYEXPL {"V_PlateCarrierGL_rgr"}

class B_Uniform : ContainerClass {
	helmet_pool[] = {
		"H_HelmetB",
		"H_HelmetB_desert",
		"H_HelmetB_grass"
	};
	uniform_pool[] = {
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam_tshirt",
		"U_B_CombatUniform_mcam"
	};
};

class B_LightUniform : B_Uniform {
	helmet_pool[] = {
		"H_HelmetB_light",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin"
	};
};

class B_SpecialUniform : B_Uniform {
	helmet_pool[] = {
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin"
	};
};

class B_LeadUniform : ContainerClass {
	helmet_pool[] = {
		"H_Beret_blk",
		"H_Beret_Colonel",
		"H_Beret_02",
		"H_MilCap_mcamo"
	};
	uniform_pool[] = {
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam"
	};
	vest_pool[] = {"V_BandollierB_rgr"};
};

class B_CrewUniform : B_LeadUniform {
	helmet_pool[] = {"H_HelmetCrew_B"};
};

#define I_B_SMALL {"B_AssaultPack_dgtl"}
#define I_B_MED {"B_FieldPack_oli"}
#define I_B_LARGE {"B_Carryall_oli"}

#define I_V_CARRIER {"V_Chestrig_oli"}
#define I_V_LIGHT {"V_PlateCarrierIA1_dgtl"}
#define I_V_STD {"V_PlateCarrierIA2_dgtl"}
#define I_V_HEAVY {"V_PlateCarrierIAGL_dgtl","V_PlateCarrierIAGL_oli"}

class I_Uniform : ContainerClass {
	helmet_pool[] = {"H_HelmetIA"};
	uniform_pool[] = {
		"U_I_CombatUniform",
		"U_I_CombatUniform_shortsleeve"
	};
};

class I_LeadUniform : ContainerClass {
	helmet_pool[] = {"H_MilCap_dgtl","H_Beret_blk"};
	uniform_pool[] = {"U_I_OfficerUniform"};
	vest_pool[] = {"V_BandollierB_oli"};
};

class I_ReconUniform : I_Uniform {
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

class I_CrewContainer : I_LeadUniform {
	helmet_pool[] = {"H_HelmetCrew_I"};
	uniform_pool[] = {"U_I_CombatUniform_shortsleeve"};
};

#define O_B_SMALL {"B_AssaultPack_ocamo"}
#define O_B_SMALL_GHEX {"B_AssaultPack_khk"}
#define O_B_MED {"B_FieldPack_ocamo"}
#define O_B_MED_GHEX {"B_FieldPack_ghex_F"}
#define O_B_LARGE {"B_Carryall_ocamo"}
#define O_B_LARGE_GHEX {"B_Carryall_ghex_F"}

#define O_V_CARRIER {"V_Chestrig_khk"}
#define O_V_CARRIER_G {"V_TacChestrig_grn_F"}
#define O_V_ARMOURED {"V_TacVest_khk"}
#define O_V_STD {"V_HarnessO_brn"}
#define O_V_STD_Ghex {"V_HarnessO_ghex_F"}
#define O_V_GL {"V_HarnessOGL_brn"}
#define O_V_GL_GHex {"V_HarnessOGL_ghex_F"}

class O_Uniform : ContainerClass {
	helmet_pool[] = {"H_HelmetO_ocamo"};
	uniform_pool[] = {"U_O_CombatUniform_ocamo"};
};

class O_Uniform_Ghex : ContainerClass {
	helmet_pool[] = {"H_HelmetO_ghex_F"};
	uniform_pool[] = {"U_O_T_Soldier_F"};
};

class O_SpecialUniform : O_Uniform {
	helmet_pool[] = {"H_HelmetSpecO_ocamo"};
};

class O_SpecialUniform_Ghex : O_Uniform {
	helmet_pool[] = {"H_HelmetSpecO_ghex_F"};
};

class O_ReconUniform : O_Uniform {
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
};

class O_LeadUniform : ContainerClass {
	helmet_pool[] = {"H_MilCap_ocamo","H_Beret_blk"};
	uniform_pool[] = {"U_O_OfficerUniform_ocamo"};
	vest_pool[] = {"V_BandollierB_khk"};
};

class O_LeadUniform_GHex : ContainerClass {
	helmet_pool[] = {"H_MilCap_ghex_F","H_Beret_blk"};
	uniform_pool[] = {"U_O_T_Officer_F"};
	vest_pool[] = {"V_BandollierB_ghex_F"};
};

class O_CrewUniform : O_LeadUniform {
	helmet_pool[] = {"H_HelmetCrew_O"};
	uniform_pool[] = {"U_O_CombatUniform_ocamo"};
};

class O_CrewUniform_Ghex : O_LeadUniform_GHex {
	helmet_pool[] = {"H_HelmetCrew_O_ghex_F"};
	uniform_pool[] = {"U_O_T_Soldier_F"};
};
