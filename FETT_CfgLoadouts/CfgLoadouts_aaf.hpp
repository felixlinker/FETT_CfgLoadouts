class Rifleman : SoldierClass {
	class Container : I_MediumContainer {};
	class Gear : I_BasicGear {};
	class Weapons : Weapons {
		class primaryWeapon : F2000 {
			scope_pool[] = {"optic_MRCO"};
			magazinesMax = 24;
		};
		class handGun : basicPistol_AAF {};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"200Rnd_65x39_cased_Box",2}};
	};
};
class RiflemanAT : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : F2000 {};
		class secondaryWeapon : PCML {};
	};
};
class AutomaticRifleman : Rifleman {
	class Container : I_HeavySoldierContainer {};
	class Weapons : Weapons {
		class primaryWeapon : MK200 {};
	};
	class Items : BasicMedicMaterial {};
};
class MachineGunner : AutomaticRifleman {
	class Container : I_LightContainer {
		backpack_pool[] = {};
	};
	class Weapons : Weapons {
		class primaryWeapon : SPMG {};
	};
	class Items : SmallMedicMaterial {};
};
class ATSpecialist : MachineGunner {
	class Container : I_LightContainer {};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {
			magazinesMax = 9;
		};
		class secondaryWeapon : I_TitanAT {};
	};
};
class AASpecialist : ATSpecialist {
	class Weapons : Weapons {
		class secondaryWeapon : I_TitanAA {};
	};
};
class AssistantMachineGunner : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : F2000 {
			magazinesMax = 9;
		};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"130Rnd_338_Mag",5}};
	};
	class Gear : I_NormalSoldierBinocGear {};
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
		class primaryWeapon : F2000GL {};
	};
	class Gear : I_NormalSoldierBinocGear {};
};
class DesignatedMarksman : SoldierClass {
	class Container : I_StandardContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Mk14 {};
		class handGun : basicPistol_AAF {};
	};
	class Items : BasicMedicMaterial {};
	class Gear : I_NormalSoldierBinocGear {};
};
class CombatMedic : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : F2000 {};
	};
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class Medic : SoldierClass {
	class Container : I_ChestRigBigContainer {};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {
			magazinesMax = 9;
		};
		class handGun : basicPistol_AAF {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	class Items : MedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class FTL : Grenadier {
	class Container : I_StandardContainer {};
	class Gear : I_NormalSoldierGPSGear {};
};
class SQL : Grenadier {
	class Container : I_RadioRuckContainer {};
	class Gear : I_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};
class Lead : SoldierClass {
	class Container : I_OfficerContainer {};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {};
		class handGun : basicPistol_AAF {};
	};
	class Gear : I_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};
class MIO : Lead {
	class Gear : Gear {
		gps_pool[] = {"i_EasyTrack_Tablet"};
	};
};
class Recon : SoldierClass {
	class Container : I_SOFContainer {};
	class Gear : I_AdvancedSoldierGear {
		gps_pool[] = {};
	};
	class Items : SOFMedicMaterial {};
	class Weapons : Weapons {
		class primaryWeapon : Mk1 {};
		class handGun : basicPistol_AAF {};
	};
};
class ReconTL : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_anprc155"};
	};
	class Gear : I_AdvancedSoldierGear {};
};
class ReconDM : Recon {
	class Weapons : Weapons {
		class primaryWeapon : Cyrus {
			muzzleAttachment_pool[] = {"muzzle_snds_93mmg"};
		};
	};
};
class ReconUAV : Recon {
	class Container : Container {
		backpack_pool[] = {"I_UAV_01_backpack_F"};
	};
	class Gear : Gear {
		gps_pool[] = {"I_UavTerminal"};
	};
};
class ReconJTAC : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_anprc155"};
	};
	class Weapons : Weapons {
		class primary : F2000GL_JTAC {
			muzzleAttachment_pool[] = {"muzzle_snds_M"};
		};
	};
	class Gear : I_AdvancedSoldierGear {
		binocular_pool[] = {"Laserdesignator"};
	};
};
class ReconMedic : Recon {
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class JTAC : ReconJTAC {
	class Container : I_RadioRuckContainer {
		helmet_pool[] = {"H_HelmetIA"};
	};
	class Weapons : Weapons {
		class primaryWeapon : F2000GL_JTAC {};
	};
	class Gear : Gear {};
};
class Sniper : SoldierClass {
	class Container : I_GhillieContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Lynx {};
		class handGun : basicPistol_AAF {};
	};
	class Gear : I_AdvancedSoldierGear {};
	class Items : SOFMedicMaterial {};
};
class Spotter : Sniper {
	class Weapons : Weapons {
		class primaryWeapon : Mk14 {};
	};
};
class Crew : SoldierClass {
	class Container : I_CrewContainer {};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {};
		class handGun : basicPistol_AAF {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	class Items : BasicMedicMaterial {};
};
class Commander : Crew {
	class Container : Container {
		backpack_pool[] = {"tf_anprc155"};
	};
};
class Pilot : SoldierClass {
	class Container : I_JetPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : PDW2000 {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};
class PilotRadio : Pilot {
	class Container : Container {
		backpack_pool[] = {"tf_anprc155"};
	};
};
class HeliPilot : SoldierClass {
	class Container : I_HeliPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : PDW2000 {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};
class HeliCrew : HeliPilot {
	class Container : I_HeliCrewGear {
		backpack_pool[] = {};
	};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {};
	};
	class Gear : I_NormalSoldierGPSGear {};
};
class ParaMedic : CombatMedic {
	class Container : Container {
		helmet_pool[] = {"H_CrewHelmetHeli_I"};
	};
	class Weapons : Weapons {
		class pimaryWeapon : F2000C {};
		class handGun {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};
class Logistician : SoldierClass {
	class Container : I_ChestRigContainer {
		helmet_pool[] = {"H_MilCap_dgtl"};
	};
	class Weapons : Weapons {
		class primaryWeapon : F2000C {};
		class handGun : basicPistol_AAF {};
	};
	class Gear : I_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {
		optional[] = {"CL_LogiTracker"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};
class LogisticianTL : Logistician {
	class Container : Container {
		backpack_pool[] = {"tf_anprc155"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};