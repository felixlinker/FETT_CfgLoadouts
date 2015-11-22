class BasicGrenades : ItemsClass {
	grenades[] = {
		{"HandGrenade",2},
		{"MiniGrenade",2},
		{"SmokeShellRed",2},
		{"SmokeShellGreen",2},
		{"SmokeShell",4}
	};
};

class SmallGrenades : ItemsClass {
	grenades[] = {
		{"HandGrenade",2},
		{"SmokeShellRed",1},
		{"SmokeShellGreen",1},
		{"SmokeShell",2}
	};
};

class SpecialGrenades : ItemsClass {
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

class SpecialGrenadesSmall : ItemsClass {
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

*/

// Basejumper
#ifdef BASEJUMPER
	#include "Medical\CfgMedicalBasejumper.hpp"
#endif
#ifdef BASEJUMPER_LAND
	#include "Medical\CfgMedicalBasejumper.hpp"
#endif

// MilSim
#ifdef MILSIM
	#include "Medical\CfgMedicalMilSim.hpp"
#endif

// Running man
#ifdef RUNNINGMAN
	#include "Medical\CfgMedicalRunningMan.hpp"
#endif

// Rücksetzungpunkt, sollte kein Medicsystem definiert sein
#ifndef MILSIM
	#ifndef BASEJUMPER
		#ifndef BASEJUMPER_LAND
			#ifndef RUNNINGMAN
				class BasicMedicMaterial : BasicGrenades {};

				class SmallMedicMaterial : SmallGrenades {};

				class CombatMedicMaterial : BasicGrenades {};

				class MedicMaterial : SmallGrenades {};

				class SOFMedicMaterial : SpecialGrenades {};

				class PilotMedicMaterial : SpecialGrenadesSmall {};
			#endif
		#endif
	#endif
#endif
