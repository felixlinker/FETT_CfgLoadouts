class M249 : WeaponClass {
	weapon_pool[] = {"rhs_weap_m249"};

	weaponRestingAttachment_pool[] = {"rhsusf_acc_saw_bipod"};

	magazine = "rhsusf_200Rnd_556x45_box";
	magazineTracer = "rhsusf_200rnd_556x45_mixed_box";
	magazinesMax = 3;
	magazinesTracerEvery = 1;
};

class M249Pip : M249 {
	weapon_pool[] = {"rhs_weap_m249_pip"};
	scope_pool[] = {"rhsusf_acc_g33_xps3"};
};

class M249PipLong : M249Pip {
	weapon_pool[] = {"rhs_weap_m249_light_L", "rhs_weap_m249_pip_L_para", "rhs_weap_m249_pip_L", "rhs_weap_m249_pip_ris"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
};

class M249PipShort : M249Pip {
	weapon_pool[] = {"rhs_weap_m249_light_S", "rhs_weap_m249_pip_S_para", "rhs_weap_m249_pip_S"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
};