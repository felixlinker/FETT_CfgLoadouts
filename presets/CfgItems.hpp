#define BASIC_MEDIC \
{ \
	{"ACE_fieldDressing",4}, \
	{"ACE_quikclot",4}, \
	{"ACE_morphine",2}, \
	"ACE_tourniquet" \
}

#define COMBAT_MEDIC \
{ \
	{"ACE_fieldDressing",12}, \
	{"ACE_packingBandage",12}, \
	{"ACE_quikclot",12}, \
	{"ACE_elasticBandage",12}, \
	{"ACE_morphine",8}, \
	{"ACE_epinephrine",8}, \
	{"ACE_plasmaIV_250",8}, \
	{"ACE_tourniquet",4}, \
	{"ACE_splint",2}, \
	"ACE_surgicalKit" \
}

#define MEDIC \
{ \
	{"ACE_fieldDressing",24}, \
	{"ACE_packingBandage",24}, \
	{"ACE_quikclot",24}, \
	{"ACE_elasticBandage",24}, \
	{"ACE_morphine",16}, \
	{"ACE_epinephrine",16}, \
	{"ACE_plasmaIV_250",8}, \
	{"ACE_plasmaIV_500",8}, \
	{"ACE_plasmaIV",8}, \
	{"ACE_tourniquet",8}, \
	{"ACE_splint",4}, \
	"ACE_surgicalKit" \
}

class BasicItems : ItemsClass {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShell",4}
	};
	medicMaterial[] = BASIC_MEDIC;
};

class SmallItems : BasicItems {
	grenades[] = {
		{"HandGrenade",2},
		{"SmokeShellRed",1},
		{"SmokeShellGreen",1},
		{"SmokeShell",2}
	};
};

class SpecialGrenades : BasicItems {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShellPurple",2},
		{"SmokeShellOrange",2},
		{"SmokeShell",2},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
};

class SpecialGrenadesSmall : BasicItems {
	grenades[] = {
		{"SmokeShellBlue",1},
		{"SmokeShellGreen",1},
		{"SmokeShellPurple",1},
		{"SmokeShellOrange",1},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
};

class CombatMedicItems : SmallItems {
	medicMaterial[] = COMBAT_MEDIC;
};

class MedicItems : SpecialGrenadesSmall {
	medicMaterial[] = MEDIC;
};

/*

	Medic Classnames - ACE:

	"ACE_fieldDressing"
	"ACE_packingBandage"
	"ACE_elasticBandage"
	"ACE_tourniquet"
	"ACE_morphine"
	"ACE_atropine"
	"ACE_epinephrine"
	"ACE_plasmaIV"
	"ACE_plasmaIV_500"
	"ACE_plasmaIV_250"
	"ACE_salineIV"
	"ACE_salineIV_500"
	"ACE_salineIV_250"
	"ACE_bloodIV"
	"ACE_bloodIV_500"
	"ACE_bloodIV_250"
	"ACE_quikclot"
	"ACE_personalAidKit"
	"ACE_surgicalKit"
	"ACE_bodyBag"

*/
