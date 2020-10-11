class PCML : WeaponClass {
	weapon_pool[] = {"launch_NLAW_F"};
	magazine = "NLAW_F";
	magazinesMax = 0;
};

class RPG42 : WeaponClass {
	skin = "hex";
	class weapon_pool {
		hex[] = {"launch_RPG32_F"};
		ghex[] = {"launch_RPG32_ghex_F"};
	};
	magazine = "RPG32_F";
	magazineTracer = "RPG32_HE_F";
	magazinesMax = 4;
	magazinesTracerEvery = 2;
};

class MAAWSMod0 : WeaponClass {
	skin = "olive";
	class weapon_pool {
		green[] = {"launch_MRAWS_green_rail_F"};
		olive[] = {"launch_MRAWS_olive_rail_F"};
		sand[] = {"launch_MRAWS_sand_rail_F"};
	};
	magazine = "MRAWS_HEAT_F";
	magazineTracer = "MRAWS_HE_F";
	magazinesMax = 4;
	magazinesTracerEvery = 2;
};

class TitanAT : WeaponClass {
	skin = "sand";
	class weapon_pool {
		sand[] = {"launch_B_Titan_short_F"};
		olive[] = {"launch_I_Titan_short_F"};
		coyote[] = {"launch_O_Titan_short_F"};
		ghex[] = {"launch_O_Titan_short_ghex_F"};
		tropic[] = {"launch_B_Titan_short_tna_F"};
	};
	magazine = "Titan_AT";
	magazineTracer = "Titan_AP";
	magazinesMax = 2;
	magazinesTracerEvery = 2;
};

class TitanAA : WeaponClass {
	skin = "sand";
	class weapon_pool {
		sand[] = {"launch_B_Titan_F"};
		digital[] = {"launch_I_Titan_F"};
		hex[] = {"launch_O_Titan_F"};
		ghex[] = {"launch_O_Titan_ghex_F"};
	};
	magazine = "Titan_AA";
	magazinesMax = 2;
};
