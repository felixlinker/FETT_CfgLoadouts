class Rifleman : SoldierClass {
	class Container : B_MediumContainer {};
	class Gear : B_BasicGear {};
	class Weapons : Weapons {
		class primaryWeapon : MX {
			scope_pool[] = {"optic_Hamr"};
			magazinesMax = 24;
		};
		class handGun : basicPistol {};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"100Rnd_65x39_caseless_mag",4}};
	};
};
class RiflemanAT : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : MX {};
		class secondaryWeapon : PCML {};
	};
};
class AutomaticRifleman : Rifleman {
	class Container : B_HeavySoldierContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXSW {};
	};
	class Items : BasicMedicMaterial {};
};
class MachineGunner : AutomaticRifleman {
	class Container : B_LightContainer {
		backpack_pool[] = {};
	};
	class Weapons : Weapons {
		class primaryWeapon : SPMG {};
	};
	class Items : SmallMedicMaterial {};
};
class ATSpecialist : MachineGunner {
	class Container : B_LightContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXC {
			magazinesMax = 9;
		};
		class secondaryWeapon : TitanAT {};
	};
};
class AASpecialist : ATSpecialist {
	class Weapons : Weapons {
		class secondaryWeapon : TitanAA {};
	};
};
class AssistantMachineGunner : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : MX {
			magazinesMax = 9;
		};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"130Rnd_338_Mag",5}};
	};
	class Gear : B_NormalSoldierBinocGear {};
};
class AssistantAT : AssistantMachineGunner {
	class Items : Items {
		other[] = {{"Titan_AT",2},"Titan_AP"};
	};
};
class AssistantAA : AssistantAT {
	class Items : Items {
		other[] = {{"Titan_AA",2}};
	};
};
class Grenadier : AutomaticRifleman {
	class Weapons : Weapons {
		class primaryWeapon : MXGL {};
	};
	class Gear : B_NormalSoldierBinocGear {};
};
class DesignatedMarksman : SoldierClass {
	class Container : B_StandardContainer {};
	class Weapons : Weapons {
		class primaryWeapon : ABR {};
		class handGun : basicPistol {};
	};
	class Items : BasicMedicMaterial {};
	class Gear : B_NormalSoldierBinocGear {};
};
class CombatMedic : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : MX {};
	};
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class Medic : SoldierClass {
	class Container : B_ChestRigBigContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXC {
			magazinesMax = 9;
		};
		class handGun : basicPistol {};
	};
	class Gear : B_NormalSoldierGPSGear {};
	class Items : MedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class FTL : Grenadier {
	class Container : B_StandardContainer {};
	class Gear : B_NormalSoldierGPSGear {};
};
class SQL : Grenadier {
	class Container : B_RadioRuckContainer {};
	class Gear : B_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};
class Lead : SoldierClass {
	class Container : B_RadioRuckContainerLead {};
	class Weapons : Weapons {
		class primaryWeapon : MXC {};
		class handGun : basicPistol {};
	};
	class Gear : B_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};
class MIO : Lead {
	class Gear : Gear {
		gps_pool[] = {"b_EasyTrack_Tablet"};
	};
};
class Recon : SoldierClass {
	class Container : B_SpecOpContainer {};
	class Gear : B_AdvancedSoldierGear {
		gps_pool[] = {};
	};
	class Items : SOFMedicMaterial {};
	class Weapons : Weapons {
		class primaryWeapon : MXM {};
		class handGun : basicPistol {};
	};
};
class ReconTL : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_rt1523g_big"};
	};
	class Gear : B_AdvancedSoldierGear {};
};
class ReconDM : Recon {
	class Weapons : Weapons {
		class primaryWeapon : Mk1 {};
	};
};
class ReconUAV : Recon {
	class Container : Container {
		backpack_pool[] = {"B_UAV_01_backpack_F"};
	};
	class Gear : Gear {
		gps_pool[] = {"B_UavTerminal"};
	};
};
class ReconJTAC : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_rt1523g_big"};
	};
	class Weapons : Weapons {
		class primaryWeapon : MXGL_JTAC {
			muzzleAttachment_pool[] = {"muzzle_snds_H"};
		};
	};
	class Gear : B_AdvancedSoldierGear {
		binocular_pool[] = {"Laserdesignator"};
	};
};
class ReconMedic : Recon {
	class Container : Container {
		backpack_pool[] = {"B_FieldPack_oli"};
	};
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class JTAC : ReconJTAC {
	class Container : B_RadioRuckContainer {
		helmet_pool[] = {
			"H_HelmetB_light",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin"
		};
	};
	class Weapons : Weapons {
		class primaryWeapon : MXGL_JTAC {};
	};
	class Gear : Gear {};
};
class Sniper : SoldierClass {
	class Container : B_GhillieContainer {};
	class Weapons : Weapons {
		class primaryWeapon : M320 {};
		class handGun : basicPistol {};
	};
	class Gear : B_AdvancedSoldierGear {};
	class Items : SOFMedicMaterial {};
};
class Spotter : Sniper {
	class Weapons : Weapons {
		class primaryWeapon : MXM {};
	};
};
class Crew : SoldierClass {
	class Container : B_CrewContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXCBlack {};
		class handGun : basicPistol {};
	};
	class Gear : B_NormalSoldierGPSGear {};
	class Items : BasicMedicMaterial {};
};
class Commander : Crew {
	class Container : Container {
		backpack_pool[] = {"tf_rt1523g_black"};
	};
};
class Pilot : SoldierClass {
	class Container : B_JetPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : VectorSMG {
			magazinesMax = 2;
		};
	};
	class Gear : B_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};
class PilotRadio : Pilot {
	class Container : Container {
		backpack_pool[] = {"tf_rt1523g_black"};
	};
};
class HeliPilot : SoldierClass {
	class Container : B_HeliPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : VectorSMG {};
	};
	class Gear : B_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};
class HeliCrew : HeliPilot {
	class Container : B_HeliCrewContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXCBlack {};
	};
	class Gear : B_NormalSoldierGPSGear {};
};
class ParaMedic : CombatMedic {
	class Container : Container {
		helmet_pool[] = {"H_CrewHelmetHeli_B"};
	};
	class Weapons : Weapons {
		class primaryWeapon : MXCBlack {};
		class handGun {};
	};
	class Gear : B_NormalSoldierGPSGear {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class Logistician : SoldierClass {
	class Container : B_LogisticianContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MXCBlack {
			magazinesMax = 7;
		};
		class handGun : basicPistol {};
	};
	class Gear : B_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {
		optional[] = {"CL_LogiTracker"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};
class LogisticianTL : Logistician {
	class Container : Container {
		backpack_pool[] = {"tf_rt1523g_black"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};
