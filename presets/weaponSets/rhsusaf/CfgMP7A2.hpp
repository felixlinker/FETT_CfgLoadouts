class MP7A2 : WeaponClass {
	skin = "black";
	class weapon_pool {
		black[] = {"rhsusf_weap_MP7A2"};
		aor1[] = {"rhsusf_weap_MP7A2_aor1"};
		desert[] = {"rhsusf_weap_MP7A2_desert"};
		winter[] = {"rhsusf_weap_MP7A2_winter"};
	};
	scope_pool[] = {"rhsusf_acc_T1_high"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	class magazine {
		black = "rhsusf_mag_40Rnd_46x30_FMJ";
		aor1 = "rhsusf_mag_40Rnd_46x30_FMJ";
		desert = "rhsusf_mag_40Rnd_46x30_FMJ";
		winter = "rhsusf_mag_40Rnd_46x30_FMJ";
	};
	class magazineTracer {
		sand = "rhsusf_mag_40Rnd_46x30_JHP";
		black = "rhsusf_mag_40Rnd_46x30_JHP";
		khaki = "rhsusf_mag_40Rnd_46x30_JHP";
	};
	magazinesMax = 6;
};