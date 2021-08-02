class M240G : WeaponClass {
	weapon_pool[] = {"rhs_weap_m240G"};

	scope_pool[] = {"rhsusf_acc_ACOG_USMC"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};

	magazine = "rhsusf_100Rnd_762x51";
	magazineTracer = "rhsusf_100Rnd_762x51_m62_tracer";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class M240B : M240G {
	weapon_pool[] = {"rhs_weap_m240B"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
}