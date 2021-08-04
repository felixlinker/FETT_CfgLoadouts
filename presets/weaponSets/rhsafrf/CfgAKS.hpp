class AKS : WeaponClass {
	weapon_pool[] = {"rhs_weap_aks74"};
	
	magazine = "rhs_30Rnd_545x39_7N6_AK";
	magazineTracer = "rhs_30Rnd_545x39_AK_green";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AKSN : AKS {
	weapon_pool[] = {"rhs_weap_aks74n"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};
};

class AKSU : AKS {
	weapon_pool[] = {"rhs_weap_aks74u"};
};

class AKSUN : AKS {
	weapon_pool[] = {"rhs_weap_aks74un"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};
};