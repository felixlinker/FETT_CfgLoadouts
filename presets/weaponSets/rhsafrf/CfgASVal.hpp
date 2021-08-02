class ASVal : WeaponClass {
	weapon_pool[] = {"rhs_weap_asval"};
	
	scope_pool[] = {"rhs_acc_pso1m2"};
	
	magazine = "rhs_20rnd_9x39mm_SP5";
	magazineTracer = "rhs_20rnd_9x39mm_SP6";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class ASValNPZ : ASVal {
	weapon_pool[] = {"rhs_weap_asval_npz"};	
	scope_pool[] = {"optic_dms"};
};

class VSS: ASVal {
	weapon_pool[] = {"rhs_weap_vss"};
};

class VSSNPZ : ASValNPZ {
	weapon_pool[] = {"rhs_weap_vss_npz"};
};