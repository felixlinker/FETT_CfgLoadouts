class SPAR16 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"arifle_SPAR_01_blk_F"};
		khaki[] = {"arifle_SPAR_01_khk_F"};
		sand[] = {"arifle_SPAR_01_snd_F"};
	};
	scope_pool[] = {"optic_Aco"};
	class magazine {
		black = "30Rnd_556x45_Stanag";
		khaki = "30Rnd_556x45_Stanag";
		sand = "30Rnd_556x45_Stanag_Sand";
	};
	class magazineTracer {
		black = "30Rnd_556x45_Stanag_Tracer_Red";
		khaki = "30Rnd_556x45_Stanag_Tracer_Red";
		sand = "30Rnd_556x45_Stanag_Sand_Tracer_Red";
	};
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class SPAR16GL : SPAR16 {
	class weapon_pool {
		black[] = {"arifle_SPAR_01_GL_blk_F"};
		khaki[] = {"arifle_SPAR_01_GL_khk_F"};
		sand[] = {"arifle_SPAR_01_GL_snd_F"};
	}
	optional[] = {GL_AMMO};
};

class SPAR16GL_HuntIR : SPAR16GL {
	magazinesMax = 4;
	optional[] = {GL_HuntIR_AMMO};
};

class SPAR16S : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"arifle_SPAR_02_blk_F"};
		khaki[] = {"arifle_SPAR_02_khk_F"};
		sand[] = {"arifle_SPAR_02_snd_F"};
	};
	class weaponRestingAttachment_pool {
		black[] = {"bipod_01_F_blk"};
		khaki[] = {"bipod_01_F_khk"};
		sand[] = {"bipod_01_F_snd"};
	};
	class magazine {
		black = "150Rnd_556x45_Drum_Mag_F";
		khaki = "150Rnd_556x45_Drum_Green_Mag_F";
		sand = "150Rnd_556x45_Drum_Sand_Mag_F";
	};
	class magazineTracer {
		black = "150Rnd_556x45_Drum_Mag_Tracer_F";
		khaki = "150Rnd_556x45_Drum_Sand_Mag_Tracer_F";
		sand = "150Rnd_556x45_Drum_Green_Mag_Tracer_F";
	};
	magazinesMax = 6;
};

class SPAR17 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"arifle_SPAR_03_blk_F"};
		khaki[] = {"arifle_SPAR_03_khk_F"};
		sand[] = {"arifle_SPAR_03_snd_F"};
	};
	class scope_pool {
		black[] = {"optic_ERCO_blk_F"};
		khaki[] = {"optic_ERCO_khk_F"};
		sand[] = {"optic_ERCO_snd_F"};
	};
	class weaponRestingAttachment_pool {
		black[] = {"bipod_01_F_blk"};
		khaki[] = {"bipod_01_F_khk"};
		sand[] = {"bipod_01_F_snd"};
	};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};
