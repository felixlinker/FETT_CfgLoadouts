class BasicMedicMaterial : BasicGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",2},
		{"ACE_fieldDressing",2},
		{"ACE_morphine",4},
		{"ACE_epinephrine",2}
	};
};

class SmallMedicMaterial : SmallGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",2},
		{"ACE_quikclot",2},
		"ACE_elasticBandage",
		"ACE_fieldDressing",
		{"ACE_morphine",2},
		"ACE_epinephrine"
	};
};

class CombatMedicMaterial : BasicGrenades {
	medicMaterial[] = {
		{"ACE_fieldDressing",12},
		{"ACE_packingBandage",12},
		{"ACE_quikclot",12},
		{"ACE_elasticBandage",12},
		{"ACE_morphine",16},
		{"ACE_atropine",8},
		{"ACE_epinephrine",8},
		{"ACE_plasmaIV_250",2},
		"ACE_tourniquet",
		{"ACE_surgicalKit",5},
		{"ACE_personalAidKit",6}
	};
};

class MedicMaterial : SmallGrenades {
	medicMaterial[] = {
		{"ACE_quikclot",24},
		{"ACE_packingBandage",24},
		{"ACE_fieldDressing",24},
		{"ACE_elasticBandage",24},
		{"ACE_tourniquet",2},
		{"ACE_morphine",24},
		{"ACE_atropine",12},
		{"ACE_epinephrine",12},
		{"ACE_salineIV_250",8},
		{"ACE_plasmaIV_250",8},
		{"ACE_personalAidKit",16},
		{"ACE_surgicalKit",16}
	};
};

class SOFMedicMaterial : SpecialGrenades {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",2},
		{"ACE_fieldDressing",2},
		{"ACE_morphine",4},
		{"ACE_epinephrine",2}
	};
};

class PilotMedicMaterial : SpecialGrenadesSmall {
	medicMaterial[] = {
		{"ACE_packingBandage",4},
		{"ACE_quikclot",4},
		{"ACE_elasticBandage",2},
		{"ACE_fieldDressing",2},
		{"ACE_morphine",4},
		{"ACE_epinephrine",2}
	};
};
