class Rifleman : SoldierClass {
	class Container : O_StandardContainer {};
	class Gear : O_BasicGear {};
	class Weapons : Weapons {
		class primaryWeapon : Katiba {
			scope_pool[] = {"optic_Arco"};
			magazinesMax = 24;
		};
		class handGun : basicPistol_csat {};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"150Rnd_762x54_Box",3}};
	};
};

class RiflemanAT : Rifleman {
	class Weapons : Weapons {
		class secondaryWeapon : RPG42 {};
	};
};

class AutomaticRifleman : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : Zafir {};
	};
	class Items : BasicMedicMaterial {};
};

class MachineGunner : AutomaticRifleman {
	class Container : O_LightContainer {
		backpack_pool[] = {};
	};
	class Weapons : Weapons {
		class primaryWeapon : Navid {};
	};
	class Items : SmallMedicMaterial {};
};

class ATSpecialist : MachineGunner {
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {
			magazinesMax = 9;
		};
		class secondaryWeapon : O_TitanAT {};
	};
};

class AASpecialist : ATSpecialist {
	class Weapons : Weapons {
		class secondaryWeapon : O_TitanAA {};
	};
};

class AssistantMachineGunner : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : Katiba {
			magazinesMax = 9;
		};
	};
	class Items : BasicMedicMaterial {
		other[] = {{"150Rnd_93x64_Mag",5}};
	};
	class Gear : O_NormalSoldierBinocGear {};
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
	class Container : O_GrenContainer {};
	class Weapons : Weapons {
		class primaryWeapon : KatibaGL {};
	};
	class Gear : O_NormalSoldierBinocGear {};
};

class DesignatedMarksman : SoldierClass {
	class Container : O_LightContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Rahim {};
		class handGun : basicPistol_csat {};
	};
	class Items : BasicMedicMaterial {};
	class Gear : O_NormalSoldierBinocGear {};
};

class CombatMedic : Rifleman {
	class Weapons : Weapons {
		class primaryWeapon : Katiba {};
	};
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};

class Medic : SoldierClass {
	class Container : O_ChestRigBigContainer {};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {
			magazinesMax = 9;
		};
		class handGun : basicPistol_csat {};
	};
	class Gear : O_NormalSoldierGPSGear {};
	class Items : MedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};

class FTL : Grenadier {
	class Gear : O_NormalSoldierGPSGear {};
};

class SQL : Grenadier {
	class Container : O_RadioRuckContainer {};
	class Gear : O_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};

class Lead : SoldierClass {
	class Container : O_LeaderContainer {};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {};
		class handGun : basicPistol_csat {};
	};
	class Gear : O_AdvancedSoldierGear {};
	class Items : SmallMedicMaterial {};
};

class MIO : Lead {
	class Gear : Gear {
		gps_pool[] = {"o_EasyTrack_Tablet"};
	};
};

class Recon : SoldierClass {
	class Container : O_SOFContainer {};
	class Gear : O_AdvancedSoldierGear {
		gps_pool[] = {};
	};
	class Items : SOFMedicMaterial {};
	class Weapons : Weapons {
		class primaryWeapon : Mk1_csat {};
		class handGun : basicPistol_csat {};
	};
};

class ReconTL : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_mr3000"};
	};
	class Gear : O_AdvancedSoldierGear {};
};

class ReconDM : Recon {
	class Weapons : Weapons {
		class primaryWeapon : Mk1 {};
	};
};

class ReconUAV : Recon {
	class Container : Container {
		backpack_pool[] = {"O_UAV_01_backpack_F"};
	};
	class Gear : Gear {
		gps_pool[] = {"O_UavTerminal"};
	};
};

class ReconJTAC : Recon {
	class Container : Container {
		backpack_pool[] = {"tf_mr3000"};
	};
	class Weapons : Weapons {
		class primaryWeapon : KatibaGL_JTAC {
			muzzleAttachment_pool[] = {"muzzle_snds_H"};
		};
	};
	class Gear : O_AdvancedSoldierGear {
		binocular_pool[] = {"Laserdesignator"};
	};
};

class ReconMedic : Recon {
	class Items : CombatMedicMaterial {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};

class JTAC : ReconJTAC {
	class Container : O_RadioRuckContainer {};
	class Weapons : Weapons {
		class primaryWeapon : KatibaGL_JTAC {};
	};
	class Gear : Gear {
		helmet_pool[] = {"H_HelmetSpecO_ocamo"};
	};
};

class Sniper : SoldierClass {
	class Container : O_GhillieContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Lynx {};
		class handGun : basicPistol_csat {};
	};
	class Gear : O_AdvancedSoldierGear {};
	class Items : SOFMedicMaterial {};
};

class Spotter : Sniper {
	class Weapons : Weapons {
		class primaryWeapon : Mk1_csat {};
	};
};

class Crew : SoldierClass {
	class Container : O_CrewContainer {};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {};
		class handGun : basicPistol_csat {};
	};
	class Gear : O_NormalSoldierGPSGear {};
	class Items : BasicMedicMaterial {};
};

class Commander : Crew {
	class Container : Container {
		backpack_pool[] = {"tf_mr3000"};
	};
};

class Pilot : SoldierClass {
	class Container : O_JetPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Sting {
			magazinesMax = 3;
		};
	};
	class Gear : O_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};

class PilotRadio : Pilot {
	class Container : Container {
		backpack_pool[] = {"tf_mr3000"};
	};
};

class HeliPilot : SoldierClass {
	class Container : O_HeliPilotContainer {};
	class Weapons : Weapons {
		class primaryWeapon : Sting {};
	};
	class Gear : O_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {};
};

class HeliCrew : HeliPilot {
	class Container : O_Uniforms {
		vest_pool[] = {"V_TacVest_brn"};
	};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {};
	};
	class Gear : O_NormalSoldierGPSGear {};
};

class ParaMedic : CombatMedic {
	class Container : Container {
		helmet_pool[] = {"H_CrewHelmetHeli_O"};
	};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {};
		class handGun {};
	};
	class Gear : O_NormalSoldierGPSGear {};
	onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
};

class Logistician : SoldierClass {
	class Container : O_StandardContainer {
		helmet_pool[] = {"H_MilCap_ocamo"};
	};
	class Weapons : Weapons {
		class primaryWeapon : KatibaC {
			magazinesMax = 7;
		};
		class handGun : basicPistol_csat {};
	};
	class Gear : O_NormalSoldierGPSGear {};
	class Items : PilotMedicMaterial {
		optional[] = {"CL_LogiTracker"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};

class LogisticianTL : Logistician {
	class Container : Container {
		backpack_pool[] = {"tf_mr3000"};
	};
	onApplyLoadout = "_this setVariable ['ACE_IsEngineer',1,true];";
};
