class Mk11 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"rhs_weap_sr25_ec"};
		desert[] = {"rhs_weap_sr25_ec_d"};
		woodland[] = {"rhs_weap_sr25_ec_wd"};
	};
	class scope_pool {
		black[] = {"rhsusf_acc_su230_mrds"};
		desert[] = {"rhsusf_acc_su230_mrds_c"};
		woodland[] = {"rhsusf_acc_su230_mrds"};
	};
	barrelAttachment_pool[] = {"acc_pointer_IR"};

	class weaponRestingAttachment_pool {
		black[] = {"bipod_01_F_blk"};
		desert[] = {"bipod_01_F_snd"};
		woodland[] = {"bipod_01_F_khk"};
	};

	magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
	magazineTracer = "rhsusf_20Rnd_762x51_SR25_m62_Mag";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};