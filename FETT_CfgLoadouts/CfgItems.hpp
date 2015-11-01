class earplugs : ItemsClass {
	other[] = {"ACE_EarPlugs"};
};

class BasicGrenades : earplugs {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShell",4}
	};
};

class SmallGrenades : earplugs {
	grenades[] = {
		{"HandGrenade",2},
		{"SmokeShellRed",1},
		{"SmokeShellGreen",1},
		{"SmokeShell",2}
	};
};

class SpecialGrenades : earplugs {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShell",4},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
};

class SpecialGrenadesSmall : earplugs {
	grenades[] = {
		{"SmokeShellBlue",1},
		{"SmokeShellGreen",1},
		{"SmokeShell",1},
		"Chemlight_green",
		"Chemlight_red",
		"B_IR_Grenade"
	};
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

	class MedicMaterials {
		#include "Medical\CfgMedicalBasejumper.hpp"
		#include "Medical\CfgMedicalCasual.hpp"
		#include "Medical\CfgMedicalMilSim.hpp"
		#include "Medical\CfgMedicalQuickNDirty.hpp"
		#include "Medical\CfgMedicalRunningMan.hpp"
	};

*/

class BasicMedicMaterial : BasicGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",3},
		{"ACE_fieldDressing",3},
		{"ACE_morphine",1},
		{"ACE_epinephrine",1},
		{"ACE_tourniquet",1}
	};
};

class SmallMedicMaterial : SmallGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",2},
		{"ACE_quikclot",2},
		"ACE_elasticBandage",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_epinephrine"
	};
};

class CombatMedicMaterial : BasicGrenades {
	medicMaterial[] = {
		{"ACE_fieldDressing",12},
		{"ACE_packingBandage",12},
		{"ACE_quikclot",12},
		{"ACE_elasticBandage",12},
		{"ACE_morphine",8},
		{"ACE_atropine",8},
		{"ACE_epinephrine",8},
		{"ACE_salineIV_500",6},
		{"ACE_tourniquet",3},
		{"ACE_surgicalKit",3},
		"w_ace_defibrillator"
	};
};

class MedicMaterial : SmallGrenades {
	medicMaterial[] = {
		{"ACE_quikclot",24},
		{"ACE_packingBandage",24},
		{"ACE_fieldDressing",24},
		{"ACE_elasticBandage",24},
		{"ACE_tourniquet",2},
		{"ACE_morphine",12},
		{"ACE_atropine",12},
		{"ACE_epinephrine",12},
		{"ACE_salineIV_500",12},
		"ACE_personalAidKit",
		{"ACE_surgicalKit",8},
		"w_ace_defibrillator"
	};
};

class SOFMedicMaterial : SpecialGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",2},
		{"ACE_fieldDressing",2},
		{"ACE_morphine",2},
		{"ACE_epinephrine",2}
	};
};

class PilotMedicMaterial : SpecialGrenadesSmall {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",2},
		{"ACE_fieldDressing",2},
		{"ACE_morphine",2},
		{"ACE_epinephrine",2}
	};
};
