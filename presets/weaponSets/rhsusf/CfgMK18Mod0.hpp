class MK18Mod0 : WeaponClass {
	skin = "black";

	class weapon_pool {
		std[] = {"rhs_weap_mk18"};
		black[] = {"rhs_weap_mk18_bk"};
		desert[] = {"rhs_weap_mk18_d"};
		woodland[] = {"rhs_weap_mk18_wd"};
	};

	scope_pool[] = {"rhsusf_acc_g33_xps3"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};

	class magazine {
		std = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		black = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		desert = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
		woodland = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
	};
	class magazineTracer {
		std = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		black = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		desert = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
		woodland = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
	};

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class MK18Mod0GL : MK18Mod0 {
	weapon_pool[] = {rhs_weap_mk18_m320};
	optional[] = {GL_AMMO};
};