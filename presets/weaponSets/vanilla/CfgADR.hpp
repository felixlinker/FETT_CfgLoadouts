class ADR : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"SMG_03_black"};
		camo[] = {"SMG_03_camo"};
		hex[] = {"SMG_03_hex"};
		khaki[] = {"SMG_03_khaki"};
	};
	//barrelAttachment_pool[] = {"muzzle_snds_570"};
	class magazine {
		black = "50Rnd_570x28_SMG_03";
		camo = "50Rnd_570x28_SMG_03";
		hex = "50Rnd_570x28_SMG_03";
		khaki = "50Rnd_570x28_SMG_03";
	};
	magazinesMax = 6;
};

class ADR_TR: ADR {
	class weapon_pool {
		black[] = {"SMG_03_TR_black"};
		camo[] = {"SMG_03_TR_camo"};
		hex[] = {"SMG_03_TR_hex"};
		khaki[] = {"SMG_03_TR_khaki"};
	};
	scope_pool[] = {"optic_Aco_grn_smg"};
};

class ADRC: ADR {
	class weapon_pool {
		black[] = {"SMG_03C_black"};
		camo[] = {"SMG_03C_camo"};
		hex[] = {"SMG_03C_hex"};
		khaki[] = {"SMG_03C_khaki"};
	};
};

class ADRC_TR: ADR_TR {
	class weapon_pool {
		black[] = {"SMG_03C_TR_black"};
		camo[] = {"SMG_03C_TR_camo"};
		hex[] = {"SMG_03C_TR_hex"};
		khaki[] = {"SMG_03C_TR_khaki"};
	};
	scope_pool[] = {"optic_Aco_grn_smg"};
};