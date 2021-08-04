class Promet : Weaponclass
{
	skin = "green";
	class weapon_pool {
		green[] = {"arifle_MSBS65_F"};
		black[] = {"arifle_MSBS65_black_F"};
		camo[] = {"arifle_MSBS65_camo_F"};
		sand[] = {"arifle_MSBS65_sand_F"};
	};
	class scope_pool {
		green[] = {"optic_ico_01_f"};
		black[] = {"optic_ico_01_black_f"};
		camo[] = {"optic_ico_01_camo_f"};
		sand[] = {"optic_ico_01_sand_f"};
	};
	magazine = "30Rnd_65x39_caseless_msbs_mag";
	magazineTracer = "30Rnd_65x39_caseless_msbs_mag_Tracer";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class PrometGL : Promet
{
	class weapon_pool {
		green[] = {"arifle_MSBS65_GL_F"};
		black[] = {"arifle_MSBS65_GL_black_F"};
		camo[] = {"arifle_MSBS65_GL_camo_F"};
		sand[] = {"arifle_MSBS65_GL_sand_F"};
	};

	optional[] = {GL_AMMO};
};

class PrometMR : Promet
{
	class weapon_pool {
		green[] = {"arifle_MSBS65_MARK_F"};
		black[] = {"arifle_MSBS65_MARK_black_F"};
		camo[] = {"arifle_MSBS65_MARK_camo_F"};
		sand[] = {"arifle_MSBS65_MARK_sand_F"};
	};
};

class PrometGS : Promet
{
	class weapon_pool {
		green[] = {"arifle_MSBS65_UBS_F"};
		black[] = {"arifle_MSBS65_UBS_black_F"};
		camo[] = {"arifle_MSBS65_UBS_camo_F"};
		sand[] = {"arifle_MSBS65_UBS_sand_F"};
	};

	optional[] = {
		{"6Rnd_12Gauge_Pellets", 2},
		{"6Rnd_12Gauge_Slug", 2}
	};
};