class SPMG : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"MMG_02_black_F"};
		sand[] = {"MMG_02_sand_F"};
		mtp[] = {"MMG_02_camo_F"};
	};
	scope_pool[] = {"optic_Hamr"};
	class weaponRestingAttachment_pool {
		black[] = {"bipod_01_F_blk"};
		sand[] = {"bipod_01_F_snd"};
		mtp[] = {"bipod_01_F_mtp"};
	};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "130Rnd_338_Mag";
	magazinesMax = 6;
};

class Navid : WeaponClass {
	skin = "tan";
	class weapon_pool {
		tan[] = {"MMG_01_tan_F"};
		hex[] = {"MMG_01_hex_F"};
	};
	scope_pool[] = {"optic_Arco"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	class weaponRestingAttachment_pool {
		tan[] = {"bipod_02_F_tan"};
		hex[] = {"bipod_02_F_hex"};
	};
	magazine = "150Rnd_93x64_Mag";
	magazinesMax = 3;
};
