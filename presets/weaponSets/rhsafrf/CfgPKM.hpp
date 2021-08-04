class PKM : WeaponClass {
	weapon_pool[] = {"rhs_weap_pkm"};
	
	magazine = "rhs_100Rnd_762x54mmR_7N26";
	magazineTracer = "rhs_100Rnd_762x54mmR_green";

	magazinesMax = 3;
	magazinesTracerEvery = 1;
};

class PKP : PKM {
	weapon_pool[] = {"rhs_weap_pkp"};
	scope_pool[] = {"rhs_acc_ekp1"};
};
