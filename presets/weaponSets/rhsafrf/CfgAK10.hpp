class AK103 : WeaponClass {
	weapon_pool[] = {"rhs_weap_ak103"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};
	
	magazine = "rhs_30Rnd_762x39mm_polymer";
	magazineTracer = "rhs_30Rnd_762x39mm_polymer_tracer";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK103Z : AK103
{
	weapon_pool[] = {"rhs_weap_ak103_zenitco01_b33"};
	scope_pool[] = {"rhs_acc_okp7_picatinny"};
};

class AK103GL : AK103
{
	weapon_pool[] = {"rhs_weap_ak103_gp25"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};

	optional[] = {{"rhs_VOG25", 6}};
};

class AK103GLZ : AK103
{
	weapon_pool[] = {"rhs_weap_ak103_gp25_npz"};
	scope_pool[] = {"rhs_acc_okp7_picatinny"};

	optional[] = {{"rhs_VOG25", 6}};
};

class AK104 : WeaponClass {
	weapon_pool[] = {"rhs_weap_ak104"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};
	
	magazine = "rhs_30Rnd_762x39mm_polymer";
	magazineTracer = "rhs_30Rnd_762x39mm_polymer_tracer";

	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK104Z : AK104
{
	weapon_pool[] = {"rhs_weap_ak104_zenitco01_b33"};
	scope_pool[] = {"rhs_acc_okp7_picatinny"};
};

class AK105 : WeaponClass {
	weapon_pool[] = {"rhs_weap_ak105"};
	scope_pool[] = {"rhs_acc_okp7_dovetail"};
	
	magazine = "rhs_30Rnd_545x39_7N10_AK";

	magazinesMax = 6;
};

class AK105Z : AK105
{
	weapon_pool[] = {"rhs_weap_ak105_zenitco01_b33"};
	scope_pool[] = {"rhs_acc_okp7_picatinny"};
};