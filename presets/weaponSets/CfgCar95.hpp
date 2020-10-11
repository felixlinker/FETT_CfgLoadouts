class Car95 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"arifle_CTAR_hex_F"};
		ghex[] = {"arifle_CTAR_ghex_F"};
	};
	scope_pool[] = {"optic_ACO_grn"};
	magazine = "30Rnd_580x42_Mag_F";
	magazineTracer = "30Rnd_580x42_Mag_Tracer_F";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class Car95GL : Car95 {
	class weapon_pool {
		black[] = {"arifle_CTAR_GL_hex_F"};
		ghex[] = {"arifle_CTAR_GL_ghex_F"};
	};
	optional[] = {GL_AMMO};
};

class Car95_1 : Car95 {
	class weapon_pool {
		black[] = {"arifle_CTARS_hex_F"};
		ghex[] = {"arifle_CTARS_ghex_F"};
	};
	class magazine {
		black = "100Rnd_580x42_hex_Mag_F";
		ghex = "100Rnd_580x42_ghex_Mag_F";
	};
	class magazineTracer {
		black = "100Rnd_580x42_hex_Mag_Tracer_F";
		ghex = "100Rnd_580x42_ghex_Mag_Tracer_F";
	};
};

class CMR76 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"srifle_DMR_07_blk_F"};
		ghex[] = {"srifle_DMR_07_ghex_F"};
	};
	class scope_pool {
		black[] = {"optic_DMS"};
		ghex[] = {"optic_DMS_ghex_F"};
	};
	magazine = "20Rnd_650x39_Cased_Mag_F";
	magazinesMax = 6;
};
