class Katiba : WeaponClass {
	weapon_pool[] = {"arifle_Katiba_F"};
	scope_pool[] = {"optic_ACO_grn"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "30Rnd_65x39_caseless_green";
	magazineTracer = "30Rnd_65x39_caseless_green_mag_Tracer";
	magazinesMax = 6;
};

class KatibaC : Katiba {
	weapon_pool[] = {"arifle_Katiba_C_F"};
};

class KatibaGL : Katiba {
	weapon_pool[] = {"arifle_Katiba_GL_F"};
	optional[] = {GL_AMMO};
};

class Zafir : WeaponClass {
	weapon_pool[] = {"LMG_Zafir_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "150Rnd_762x54_Box";
	magazineTracer = "150Rnd_762x54_Box_Tracer";
	magazinesMax = 3;
	magazinesTracerEvery = 2;
};

class Rahim : WeaponClass {
	weapon_pool[] = {"srifle_DMR_01_f"};
	scope_pool[] = {"optic_DMS"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_hex"};
	magazine = "10Rnd_762x54_Mag";
	magazinesMax = 8;
};
