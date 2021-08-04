// Standard NATO pistol
class P07 : WeaponClass {
	skin = "sand";
	class weapon_pool {
		sand[] = {"hgun_P07_F"};
		khaki[] = {"hgun_P07_khk_F"};
	};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 1;
};

// Standard AAF pistol
class ACPC2 : WeaponClass {
	weapon_pool[] = {"hgun_ACPC2_F"};
	magazine = "9Rnd_45ACP_Mag";
	magazinesMax = 1;
};

// Standard CSAT pistol
class Rook40 : WeaponClass {
	weapon_pool[] = {"hgun_Rook40_F"};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 1;
};
