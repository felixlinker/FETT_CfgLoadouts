// NATO
class VectorSMG : WeaponClass {
	weapon_pool[] = {"SMG_01_Holo_F"};
	scope_pool[] = {"optic_Holosight_smg"};
	magazine = "30Rnd_45ACP_Mag_SMG_01";
	magazinesMax = 3;
};

// AAF
class PDW2000 : VectorSMG {
	weapon_pool[] = {"hgun_PDW2000_Holo_F"};
	magazine = "30Rnd_9x21_Mag";
};

// CSAT
class Sting : VectorSMG {
	weapon_pool[] = {"SMG_02_F"};
	scope_pool[] = {"optic_ACO_grn"};
	magazine = "30Rnd_9x21_Mag_SMG_02";
};
