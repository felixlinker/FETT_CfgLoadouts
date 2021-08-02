class AK12 : WeaponClass {
	weapon_pool[] = {"arifle_AK12_F"};
	magazine = "30Rnd_762x39_AK12_Mag_F";
	magazineTracer = "30Rnd_762x39_Mag_Tracer_Green_F";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK12GL : AK12 {
	weapon_pool[] = {"arifle_AK12_GL_F"};
	optional[] = {GL_AMMO};
};
