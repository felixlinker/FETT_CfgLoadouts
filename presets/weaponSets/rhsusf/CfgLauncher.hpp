class Javelin : WeaponClass {
	weapon_pool[] = {"rhs_weap_fgm148"};
	magazine = "rhs_fgm148_magazine_AT";
	magazinesMax = 1;
};

class FIM92F : WeaponClass {
	weapon_pool[] = {"rhs_weap_fim92"};
	magazine = "rhs_fim92_mag";
	magazinesMax = 2;
};

class M136 : WeaponClass {
	skin = "HEAT"
	class weapon_pool {
		HEAT[] = {"rhs_weap_M136"};
		HEDP[] = {"rhs_weap_M136_hepd"};
		HP[] = {"rhs_weap_M136_hp"};
	};
	magazinesMax = 0;
};

class MK183 : WeaponClass {
	skin = "black"
	class weapon_pool {
		black[] = {"rhs_weap_smaw"};
		green[] = {"rhs_weap_smaw_green"};
	};
	scope_pool[] = {"rhs_weap_optic_smaw"};
	magazine = "rhs_mag_smaw_HEDP";
	magazinesMax = 2;
};