// "bipod_01_F_blk", // groß, auch mit _mtp, _snd
// "bipod_02_F_blk" // klein, auch mit _hex, _tan, _blk, _oli

class ACO : WeaponClass {
	scope_pool[] = {"optic_Aco"};
};

class RCO : WeaponClass {
	scope_pool[] = {"optic_Hamr"};
};

class MRCO : WeaponClass {
	scope_pool[] = {"optic_MRCO"};
};

class DMS : WeaponClass {
	scope_pool[] = {"optic_DMS"};
};

class SOS : WeaponClass {
	scope_pool[] = {"optic_SOS"};
};

class KHS : WeaponClass {
	scope_pool[] = {"optic_KHS_blk"};
};

class Nightstalker : WeaponClass {
	scope_pool[] = {"optic_Nightstalker"};
};

class Holosight : WeaponClass {
	scope_pool[] = {"optic_Holosight"};
};

class Holosight_SMG : WeaponClass {
	scope_pool[] = {"optic_Holosight_smg"};
};

class LRPS : WeaponClass {
	scope_pool[] = {"optic_LRPS"};
};

class MX : ACO {
	weapon_pool[] = {"arifle_MX_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "30Rnd_65x39_caseless_mag";
	magazineTracer = "30Rnd_65x39_caseless_mag_Tracer";
	magazinesMax = 15;
};

class MXM : MX {
	weapon_pool[] = {"arifle_MXM_F"};
	scope_pool[] = {"optic_Hamr"};
	weaponRestingAttachment_pool[] = {"bipod_01_F_snd"};
	barrelAttachment_pool[] = {"muzzle_snds_H"};
};

class MXBlack : MX {
	weapon_pool[] = {"arifle_MX_Black_F"};
};

class MXGL : MX {
	weapon_pool[] = {"arifle_MX_GL_F"};
	magazinesMax = 9;
	optional[] = {
		{"1Rnd_HE_Grenade_shell",12},
		{"1Rnd_SmokeRed_Grenade_shell",4},
		{"1Rnd_SmokeGreen_Grenade_shell",4}
	};
};

class MXGL_JTAC : MXGL {
	magazinesMax = 7;
	optional[] = {
		{"1Rnd_HE_Grenade_shell",8},
		{"1Rnd_SmokeRed_Grenade_shell",8},
		{"1Rnd_SmokeGreen_Grenade_shell",8},
		{"1Rnd_SmokeBlue_Grenade_shell",4},
		{"1Rnd_SmokeYellow_Grenade_shell",4},
		"Laserbatteries"
	};
};

class MXSW : MX {
	weapon_pool[] = {"arifle_MX_SW_F"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_blk"};
	magazine = "100Rnd_65x39_caseless_mag";
	magazineTracer = "100Rnd_65x39_caseless_mag_Tracer";
	magazinesMax = 10;
};

class MXC : Holosight {
	weapon_pool[] = {"arifle_MXC_F"};
	magazine = "30Rnd_65x39_caseless_mag";
	magazineTracer = "30Rnd_65x39_caseless_mag_Tracer";
	magazinesMax = 12;
};

class MXCBlack : MXC {
	weapon_pool[] = {"arifle_MXC_Black_F"};
};

class ABR : DMS {
	weapon_pool[] = {"srifle_EBR_F"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 15;
};

class Mk1 : ABR {
	weapon_pool[] = {"srifle_DMR_03_F","srifle_DMR_03_multicam_F","srifle_DMR_03_tan_F"};
	muzzleAttachment_pool[] = {"muzzle_snds_B"};
	magazine = "20Rnd_762x51_Mag";
};

class SPMG : RCO {
	weapon_pool[] = {"MMG_02_black_F"};
	weaponRestingAttachment_pool[] = {"bipod_01_F_blk"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "130Rnd_338_Mag";
	magazinesMax = 8;
};

class basicPistol : WeaponClass {
	weapon_pool[] = {"hgun_P07_F"};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 3;
};

class basicPistol_AAF : basicPistol {
	weapon_pool[] = {"hgun_ACPC2_F"};
	magazine = "9Rnd_45ACP_Mag";
};

class PCML : WeaponClass {
	weapon_pool[] = {"launch_NLAW_F"};
	magazine = "NLAW_F";
	magazinesMax = 0;
};

class TitanAT : WeaponClass {
	weapon_pool[] = {"launch_B_Titan_short_F"};
	magazine = "Titan_AT";
	magazinesMax = 2;
	optional[] = {"Titan_AP"};
};

class I_TitanAT : TitanAT {
	weapon_pool[] = {"launch_I_Titan_short_F"};
};

class TitanAA : WeaponClass {
	weapon_pool[] = {"launch_B_Titan_F"};
	magazine = "Titan_AA";
	magazinesMax = 2;
};

class I_TitanAA : TitanAA {
	weapon_pool[] = {"launch_I_Titan_F"};
};

class Lynx : LRPS {
	weapon_pool[] = {"srifle_GM6_F"};
	magazine = "5Rnd_127x108_Mag";
	magazineTracer = "5Rnd_127x108_APDS_Mag";
	magazinesMax = 8;
	magazinesTracerEvery = 4;
};

class VectorSMG : Holosight_SMG {
	weapon_pool[] = {"SMG_01_Holo_F"};
	magazine = "30Rnd_45ACP_Mag_SMG_01";
	magazinesMax = 7;
};

class PDW2000 : Holosight_SMG {
	weapon_pool[] = {"hgun_PDW2000_Holo_F"};
	magazine = "30Rnd_9x21_Mag";
	magazinesMax = 4;
};

class F2000 : ACO {
	weapon_pool[] = {"arifle_Mk20_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "30Rnd_556x45_Stanag";
	magazineTracer = "30Rnd_556x45_Stanag_Tracer_Yellow";
	magazinesMax = 15;
};

class F2000C : F2000 {
	weapon_pool[] = {"arifle_Mk20C_F"};
};

class F2000GL : F2000 {
	weapon_pool[] = {"arifle_Mk20_GL_F"};
	optional[] = {
		{"1Rnd_HE_Grenade_shell",12},
		{"1Rnd_SmokeRed_Grenade_shell",4},
		{"1Rnd_SmokeGreen_Grenade_shell",4}
	};
};

class F2000GL_JTAC : F2000GL {
	magazinesMax = 7;
	optional[] = {
		{"1Rnd_HE_Grenade_shell",8},
		{"1Rnd_SmokeRed_Grenade_shell",8},
		{"1Rnd_SmokeGreen_Grenade_shell",8},
		{"1Rnd_SmokeBlue_Grenade_shell",4},
		{"1Rnd_SmokeYellow_Grenade_shell",4},
		"Laserbatteries"
	};
};

class MK200 : MRCO {
	weapon_pool[] = {"LMG_Mk200_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "200Rnd_65x39_cased_Box";
	magazineTracer = "200Rnd_65x39_cased_Box_Tracer";
	magazinesMax = 6;
	magazinesTracerEvery = 2;
};

class Mk14 : KHS {
	weapon_pool[] = {"srifle_DMR_06_olive_F"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 12;
};

class Cyrus : KHS {
	weapon_pool[] = {"srifle_DMR_05_blk_F","srifle_DMR_05_tan_f"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "10Rnd_93x64_DMR_05_Mag";
	magazinesMax = 20;
};
