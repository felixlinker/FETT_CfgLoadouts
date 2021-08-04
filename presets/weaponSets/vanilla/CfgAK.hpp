class AK12 : WeaponClass {
	skin = "black";

	class weapon_pool {
		black[] = {"arifle_AK12_F"};
		lush[] = {"arifle_AK12_lush_F"};
		arid[] = {"arifle_AK12_arid_F"};
	};
	
	class magazine {
		black = "30Rnd_762x39_AK12_Mag_F";
		lush = "30Rnd_762x39_AK12_Lush_Mag_F";
		arid = "30Rnd_762x39_AK12_Arid_Mag_F";
	};
	class magazineTracer {
		black = "30Rnd_762x39_AK12_Mag_Tracer_F";
		lush = "30Rnd_762x39_AK12_Lush_Mag_Tracer_F";
		arid = "30Rnd_762x39_AK12_Arid_Mag_Tracer_F";
	};
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK12GL : AK12 {
	class weapon_pool {
		black[] = {"arifle_AK12_GL_F"};
		lush[] = {"arifle_AK12_GL_lush_F"};
		arid[] = {"arifle_AK12_GL_arid_F"};
		};
	optional[] = {GL_AMMO};
};

class AK12U : AK12 {
	class weapon_pool {
		black[] = {"arifle_AK12U_F"};
		lush[] = {"arifle_AK12U_lush_F"};
		arid[] = {"arifle_AK12U_arid_F"};
	};
};

class RPK12 : AK12{
	class weapon_pool {
		black[] = {"arifle_RPK12_F"};
		lush[] = {"arifle_RPK12_lush_F"};
		arid[] = {"arifle_RPK12_arid_F"};
	};
	class magazine {
		black = "75rnd_762x39_AK12_Mag_F";
		lush = "75rnd_762x39_AK12_Lush_Mag_F";
		arid = "75rnd_762x39_AK12_Arid_Mag_F";
	};
	class magazineTracer {
		black = "75rnd_762x39_AK12_Mag_Tracer_F";
		lush = "75rnd_762x39_AK12_Lush_Mag_Tracer_F";
		arid = "75rnd_762x39_AK12_Arid_Mag_Tracer_F";
	};
	magazinesMax = 3;
	magazinesTracerEvery = 3;
};
