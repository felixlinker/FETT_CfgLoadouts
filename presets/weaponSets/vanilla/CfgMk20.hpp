class MK20 : WeaponClass {
	weapon_pool[] = {"arifle_Mk20_F"};
	scope_pool[] = {"optic_ACO_grn"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "30Rnd_556x45_Stanag";
	magazineTracer = "30Rnd_556x45_Stanag_Tracer_Yellow";
	magazinesMax = 6;
};

class MK20C : MK20 {
	weapon_pool[] = {"arifle_Mk20C_F"};
};

class MK20GL : MK20 {
	weapon_pool[] = {"arifle_Mk20_GL_F"};
	optional[] = {GL_AMMO};
};

class MK200 : WeaponClass {
	skin = "sand";
	
	class weapon_pool {
		sand[] = {"LMG_Mk200_F"};
		black[] = {"LMG_Mk200_black_F"};
	};

	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "200Rnd_65x39_cased_Box";
	magazineTracer = "200Rnd_65x39_cased_Box_Tracer";
	magazinesMax = 3;
	magazinesTracerEvery = 2;
};

class Mk18 : WeaponClass {
	weapon_pool[] = {"srifle_EBR_F"};
	scope_pool[] = {"optic_MRCO"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};
