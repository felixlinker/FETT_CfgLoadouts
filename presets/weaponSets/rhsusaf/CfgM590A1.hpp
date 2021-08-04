class M590A1_Long : WeaponClass {
	weapon_pool[] = {"rhs_weap_M590_8RD"};
	
	magazine = "rhsusf_8Rnd_Slug";
	magazineTracer = "rhsusf_8Rnd_00Buck";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};


class M590A1_Short : WeaponClass {
	weapon_pool[] = {"rhs_weap_M590_5RD"};
};

/* Ammunition:
 *
 * rhsusf_8Rnd_Slug
 * rhsusf_8Rnd_HE
 * rhsusf_8Rnd_FRAG
 * rhsusf_8Rnd_00Buck
 */