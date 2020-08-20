// "bipod_01_F_blk", // groß, auch mit _mtp, _snd
// "bipod_02_F_blk" // klein, auch mit _hex, _tan, _blk, _oli

#define GL_AMMO \
	{"1Rnd_HE_Grenade_shell",12}, \
	{"1Rnd_SmokeRed_Grenade_shell",4}, \
	{"1Rnd_SmokeGreen_Grenade_shell",4}

#define GL_HuntIR_AMMO \
	{"1Rnd_HE_Grenade_shell",6}, \
	{"1Rnd_SmokeRed_Grenade_shell",2}, \
	{"1Rnd_SmokeGreen_Grenade_shell",2}, \
	{"ACE_HuntIR_M203",2}, \
	"ACE_HuntIR_monitor"

#define GL_JTAC_AMMO \
	{"1Rnd_HE_Grenade_shell",8}, \
	{"1Rnd_SmokeRed_Grenade_shell",8}, \
	{"1Rnd_SmokeGreen_Grenade_shell",8}, \
	{"1Rnd_SmokeBlue_Grenade_shell",4}, \
	{"1Rnd_SmokeYellow_Grenade_shell",4}

class ACO : WeaponClass {
	scope_pool[] = {"optic_Aco"};
};

class ACO_green : WeaponClass {
	scope_pool[] = {"optic_ACO_grn"};
};

class RCO : WeaponClass {
	scope_pool[] = {"optic_Hamr"};
};

class RCO_Khaki : WeaponClass {
	scope_pool[] = {"optic_Hamr_khk_F"};
};

class ERCO : WeaponClass {
	scope_pool[] = {"optic_ERCO_blk_F"};
};

class ERCO_Khaki : WeaponClass {
	scope_pool[] = {"optic_ERCO_khk_F"};
};

class ARCO : WeaponClass {
	scope_pool[] = {"optic_Arco"};
};

class ARCO_Black : WeaponClass {
	scope_pool[] = {"optic_Arco_blk_F"};
};

class ARCO_GHex : WeaponClass {
	scope_pool[] = {"optic_Arco_ghex_F"};
};

class MRCO : WeaponClass {
	scope_pool[] = {"optic_MRCO"};
};

class DMS : WeaponClass {
	scope_pool[] = {"optic_DMS"};
};

class DMS_GHex : WeaponClass {
	scope_pool[] = {"optic_DMS_ghex_F"};
};

class MOS : WeaponClass {
	scope_pool[] = {"optic_SOS"};
};

class Kahlia : WeaponClass {
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
	magazinesMax = 6;
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
	optional[] = {GL_AMMO};
};

class MXGL_HuntIR : MXGL {
	magazinesMax = 4;
	optional[] = {GL_HuntIR_AMMO};
}

class MXGL_JTAC : MXGL {
	optional[] = {GL_JTAC_AMMO};
};

class MXSW : MX {
	weapon_pool[] = {"arifle_MX_SW_F"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_blk"};
	magazine = "100Rnd_65x39_caseless_mag";
	magazineTracer = "100Rnd_65x39_caseless_mag_Tracer";
};

class MXC : MX {
	weapon_pool[] = {"arifle_MXC_F"};
};

class MXCBlack : MXC {
	weapon_pool[] = {"arifle_MXC_Black_F"};
};

class SPAR16 : ACO {
	weapon_pool[] = {"arifle_SPAR_01_blk_F"};
	magazine = "30Rnd_556x45_Stanag";
	magazineTracer = "30Rnd_556x45_Stanag_Tracer_Red";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class SPAR16GL : SPAR16 {
	weapon_pool[] = {"arifle_SPAR_01_GL_blk_F"};
	optional[] = {GL_AMMO};
};

class SPAR16GL_HuntIR : SPAR16GL {
	magazinesMax = 4;
	optional[] = {GL_HuntIR_AMMO};
};

class SPAR16S : SPAR16 {
	weapon_pool[] = {"arifle_SPAR_02_blk_F"};
	weaponRestingAttachment_pool[] = {"bipod_01_F_blk"};
	magazine = "150Rnd_556x45_Drum_Mag_F";
	magazineTracer = "150Rnd_556x45_Drum_Mag_Tracer_F";
};

class SPAR17 : DMS {
	weapon_pool[] = {"arifle_SPAR_03_blk_F"};
	weaponRestingAttachment_pool[] = {"bipod_01_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};

class Mk18ABR : DMS {
	weapon_pool[] = {"srifle_EBR_F"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};

class Mk1 : Mk18ABR {
	weapon_pool[] = {"srifle_DMR_03_F","srifle_DMR_03_multicam_F","srifle_DMR_03_tan_F"};
	muzzleAttachment_pool[] = {"muzzle_snds_B"};
	magazine = "20Rnd_762x51_Mag";
};

class SPMG : RCO {
	weapon_pool[] = {"MMG_02_black_F"};
	weaponRestingAttachment_pool[] = {"bipod_01_F_blk"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "130Rnd_338_Mag";
	magazinesMax = 6;
};

class basicPistol : WeaponClass {
	weapon_pool[] = {"hgun_P07_F"};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 1;
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
	magazineTracer = "Titan_AP";
	magazinesMax = 2;
	magazinesTracerEvery = 2;
};

class I_TitanAT : TitanAT {
	weapon_pool[] = {"launch_I_Titan_short_F"};
};

class O_TitanAT : TitanAT {
	weapon_pool[] = {"launch_O_Titan_short_F"};
};

class TitanAA : WeaponClass {
	weapon_pool[] = {"launch_B_Titan_F"};
	magazine = "Titan_AA";
	magazinesMax = 2;
};

class I_TitanAA : TitanAA {
	weapon_pool[] = {"launch_I_Titan_F"};
};

class O_TitanAA : TitanAA {
	weapon_pool[] = {"launch_O_Titan_F"};
};

class Lynx : LRPS {
	weapon_pool[] = {"srifle_GM6_F","srifle_GM6_camo_F"};
	magazine = "5Rnd_127x108_Mag";
	magazineTracer = "5Rnd_127x108_APDS_Mag";
	magazinesMax = 8;
	magazinesTracerEvery = 4;
};

class M320 : Lynx {
	weapon_pool[] = {"srifle_LRR_F","srifle_LRR_camo_F"};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 8;
};

class VectorSMG : Holosight_SMG {
	weapon_pool[] = {"SMG_01_Holo_F"};
	magazine = "30Rnd_45ACP_Mag_SMG_01";
	magazinesMax = 6;
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
	magazinesMax = 6;
};

class F2000C : F2000 {
	weapon_pool[] = {"arifle_Mk20C_F"};
};

class F2000GL : F2000 {
	weapon_pool[] = {"arifle_Mk20_GL_F"};
	optional[] = {GL_AMMO};
};

class F2000GL_JTAC : F2000GL {
	magazinesMax = 6;
	optional[] = {GL_JTAC_AMMO};
};

class MK200 : ACO {
	weapon_pool[] = {"LMG_Mk200_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "200Rnd_65x39_cased_Box";
	magazineTracer = "200Rnd_65x39_cased_Box_Tracer";
	magazinesMax = 3;
	magazinesTracerEvery = 2;
};

class Mk14 : DMS {
	weapon_pool[] = {"srifle_EBR_F"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "20Rnd_762x51_Mag";
	magazinesMax = 6;
};

class Cyrus : Kahlia {
	weapon_pool[] = {"srifle_DMR_05_blk_F","srifle_DMR_05_tan_f"};
	weaponRestingAttachment_pool[] = {"bipod_03_F_blk"};
	magazine = "10Rnd_93x64_DMR_05_Mag";
	magazinesMax = 6;
};

class Katiba : ACO_green {
	weapon_pool[] = {"arifle_Katiba_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "30Rnd_65x39_caseless_green";
	magazineTracer = "30Rnd_65x39_caseless_green_mag_Tracer";
	magazinesMax = 6;
};

class KatibaC : Katiba {
	weapon_pool[] = {"arifle_Katiba_C_F"};
};

class KatibaGL : Katiba {
	weapon_pool[] = {"arifle_Katiba_GL_F"};
	optional[] = {GL_AMMO};
};

class KatibaGL_HuntIR : KatibaGL {
	magazinesMax = 4;
	optional[] = {GL_HuntIR_AMMO};
};

class KatibaGL_JTAC : KatibaGL {
	optional[] = {GL_JTAC_AMMO};
};

class Zafir : ACO_green {
	weapon_pool[] = {"LMG_Zafir_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	magazine = "150Rnd_762x54_Box";
	magazineTracer = "150Rnd_762x54_Box_Tracer";
	magazinesMax = 3;
	magazinesTracerEvery = 2;
};

class Navid : ARCO {
	weapon_pool[] = {"MMG_01_hex_F","MMG_01_tan_F"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_tan"};
	magazine = "150Rnd_93x64_Mag";
	magazinesMax = 3;
};

class Cyrus_csat : Cyrus {
	weapon_pool[] = {"srifle_DMR_05_hex_F","srifle_DMR_05_tan_f"};
};

class Rahim : DMS {
	weapon_pool[] = {"srifle_DMR_01_f"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	weaponRestingAttachment_pool[] = {"bipod_02_F_hex"};
	magazine = "10Rnd_762x54_Mag";
	magazinesMax = 8;
};

class RPG42 : WeaponClass {
	weapon_pool[] = {"launch_RPG32_F"};
	magazine = "RPG32_F";
	magazineTracer = "RPG32_HE_F";
	magazinesMax = 4;
	magazinesTracerEvery = 2;
};

class RPG42_GHex : RPG42 {
	weapon_pool[] = {"launch_RPG32_ghex_F"};
};

class basicPistol_csat : WeaponClass {
	weapon_pool[] = {"hgun_Rook40_F"};
	magazine = "16Rnd_9x21_Mag";
	magazinesMax = 1;
};

class Mk1_csat : Mk1 {
	weapon_pool[] = {"srifle_DMR_03_F","srifle_DMR_03_khaki_F","srifle_DMR_03_tan_F"};
};

class Sting : ACO_green {
	weapon_pool[] = {"SMG_02_F"};
	magazine = "30Rnd_9x21_Mag";
	magazineTracer = "30Rnd_9x21_Green_Mag";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK12 : ACO_green {
	weapon_pool[] = {"arifle_AK12_F"};
	magazine = "30Rnd_762x39_AK12_Mag_F";
	magazineTracer = "30Rnd_762x39_Mag_Tracer_Green_F";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class AK12GL : AK12 {
	weapon_pool[] = {"arifle_AK12_GL_F"};
	optional[] = {GL_AMMO};
};

class Car95 : ACO_green {
	weapon_pool[] = {"arifle_CTAR_hex_F"};
	magazine = "30Rnd_580x42_Mag_F";
	magazineTracer = "30Rnd_580x42_Mag_Tracer_F";
	magazinesMax = 6;
	magazinesTracerEvery = 3;
};

class Car95_GHex : Car95 {
	weapon_pool[] = {"arifle_CTAR_ghex_F"};
};

class Car95GL : Car95 {
	weapon_pool[] = {"arifle_CTAR_GL_hex_F"};
	optional[] = {GL_AMMO};
};

class Car95GL_HuntIR : Car95GL {
	optional[] = {GL_HuntIR_AMMO};
};

class Car95GL_GHex : Car95GL {
	weapon_pool[] = {"arifle_CTAR_GL_ghex_F"};
};

class Car95GL_GHex_HuntIR : Car95GL_GHex {
	optional[] = {GL_HuntIR_AMMO};
};

class Car95_1 : Car95 {
	weapon_pool[] = {"arifle_CTARS_hex_F"};
	magazine = "100Rnd_580x42_hex_Mag_F";
	magazineTracer = "100Rnd_580x42_hex_Mag_Tracer_F";
};

class Car95_1_GHex : Car95_1 {
	weapon_pool[] = {"arifle_CTARS_ghex_F"};
	magazine = "100Rnd_580x42_ghex_Mag_F";
	magazineTracer = "100Rnd_580x42_ghex_Mag_Tracer_F";
};

class CMR76 : DMS {
	weapon_pool[] = {"srifle_DMR_07_hex_F"};
	magazine = "20Rnd_650x39_Cased_Mag_F";
	magazinesMax = 6;
};

class CMR76_Ghex : DMS_GHex {
	weapon_pool[] = {"srifle_DMR_07_ghex_F"};
	magazine = "20Rnd_650x39_Cased_Mag_F";
	magazinesMax = 6;
};

class MAAWSMod0_Olive : WeaponClass {
	weapon_pool[] = {"launch_MRAWS_olive_rail_F"};
	magazine = "MRAWS_HEAT_F";
	magazineTracer = "MRAWS_HE_F";
	magazinesMax = 4;
	magazinesTracerEvery = 2;
};

class MAAWSMod0_Sand : MAAWSMod0_Olive {
	weapon_pool[] = {"launch_MRAWS_sand_rail_F"};
};
