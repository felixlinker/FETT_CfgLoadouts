// CSAT + AAF
class Lynx : WeaponClass {
	skin = "hex";
	class weapon_pool {
		black[] = {"srifle_GM6_F"};
		hex[] = {"srifle_GM6_camo_F"};
		ghex[] = {"srifle_GM6_ghex_F"};
	};
	class scope_pool {
		black[] = {"optic_LRPS"};
		hex[] = {"optic_LRPS"};
		ghex[] = {"optic_LRPS_ghex_F"};
	};
	magazine = "5Rnd_127x108_Mag";
	magazinesMax = 5;
	magazinesTracerEvery = 0;
	optional[] = {"ACE_RangeCard"};
};

// NATO
class M320 : Lynx {
	skin = "camo";
	class weapon_pool {
		black[] = {"srifle_LRR_F"};
		camo[] = {"srifle_LRR_camo_F"};
		tropic[] = {"srifle_LRR_tna_F"};
	};
	scope_pool[] = {"optic_LRPS"};
	magazine = "7Rnd_408_Mag";
};
