// Primarily in use by NATO
class Mk1 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"srifle_DMR_03_F"};
		mtp[] = {"srifle_DMR_03_multicam_F"};
		sand[] = {"srifle_DMR_03_tan_F"};
		khaki[] = {"srifle_DMR_03_khaki_F"};
		woodland[] = {"srifle_DMR_03_woodland_F"};
	};
	class scope_pool {
		black[] = {"optic_AMS"};
		mtp[] = {"optic_AMS"};
		sand[] = {"optic_AMS_snd"};
		khaki[] = {"optic_AMS_khk"};
		woodland[] = {"optic_AMS"};
	};
	class weaponRestingAttachment_pool {
		black[] = {"bipod_01_F_blk"};
		mtp[] = {"bipod_01_F_mtp"};
		sand[] = {"bipod_01_F_snd"};
		khaki[] = {"bipod_01_F_khk"};
		woodland[] = {"bipod_01_F_blk"};
	};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};

// Primarily in use by CSAT
class Cyrus : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"srifle_DMR_05_blk_F"};
		tan[] = {"srifle_DMR_05_tan_f"};
		hex[] = {"srifle_DMR_05_hex_f"};
	};
	class scope_pool {
		black[] = {"optic_KHS_blk"};
		tan[] = {"optic_KHS_tan"};
		hex[] = {"optic_KHS_hex"};
	};
	class weaponRestingAttachment_pool {
		black[] = {"bipod_02_F_blk"};
		tan[] = {"bipod_02_F_tan"};
		hex[] = {"bipod_02_F_hex"};
	};
	magazine = "10Rnd_93x64_DMR_05_Mag";
	magazinesMax = 6;
};

class Mk14 : WeaponClass {
	skin = "olive";
	class weapon_pool {
		olive[] = {"srifle_DMR_06_olive_F"};
		camo[] = {"srifle_DMR_06_camo_F"};
	};
	scope_pool[] = {"optic_KHS_blk"};
	class weaponRestingAttachment_pool {
		olive[] = {"bipod_03_F_oli"};
		camo[] = {"bipod_03_F_blk"};
	};
};
