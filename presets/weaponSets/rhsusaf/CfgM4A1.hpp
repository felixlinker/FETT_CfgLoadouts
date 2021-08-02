class M4A1 : WeaponClass {
	weapon_pool[] = {"rhs_weap_m4a1_carryhandle"};
	
	scope_pool[] = {"rhsusf_acc_g33_xps3"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	
	magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
	magazineTracer = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class M4A1GL : M4A1 {
	weapon_pool[] = {"rhs_weap_m4a1_carryhandle_m203S"};
	optional[] = {GL_AMMO};
};

class M4A1_BlockII : M4A1 {
	skin = "woodland";
	class weapon_pool {
		std[] = {"rhs_weap_m4a1_blockII"};
		black[] = {"rhs_weap_m4a1_blockII_bk"};
		desert[] = {"rhs_weap_m4a1_blockII_d"};
		woodland[] = {"rhs_weap_m4a1_blockII_wd"};
	};
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
};

class M4A1_BlockII_GL : M4A1_BlockII{
	class weapon_pool {
		std[] = {"rhs_weap_m4a1_blockII_M203"};
		black[] = {"rhs_weap_m4a1_blockII_M203_bk"};
		desert[] = {"rhs_weap_m4a1_blockII_M203_d"};
		woodland[] = {"rhs_weap_m4a1_blockII_M203_wd"};
	};
	optional[] = {GL_AMMO};
};