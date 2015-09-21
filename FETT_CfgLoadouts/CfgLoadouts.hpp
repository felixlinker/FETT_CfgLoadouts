#include "CfgDefines.hpp"
#include "CfgContainers.hpp"
#include "CfgGear.hpp"
#include "CfgItems.hpp"
#include "CfgWeapons.hpp"

class CfgLoadouts {
	class B_Rifleman : SoldierClass {
		class Container : B_MediumContainer {};
		class Gear : B_NormalSoldierGear {};
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

	class I_Rifleman : SoldierClass {
		class Container : I_MediumContainer {};
		class Gear : I_NormalSoldierGear {};
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

	class B_RiflemanAT : B_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : MX {};
			class secondaryWeapon : PCML {};
		};
	};

	class I_RiflemanAT : I_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : F2000 {};
			class secondaryWeapon : PCML {};
		};
	};

	class B_AutomaticRifleman : B_Rifleman {
		class Container : B_HeavySoldierContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXSW {};
		};
		class Items : BasicMedicMaterial {};
	};

	class I_AutomaticRifleman : I_Rifleman {
		class Container : I_HeavySoldierContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MK200 {};
		};
		class Items : BasicMedicMaterial {};
	};

	class B_MachineGunner : B_AutomaticRifleman {
		class Container : B_LightContainer {
			backpack_pool[] = {};
		};
		class Weapons : Weapons {
			class primaryWeapon : SPMG {};
		};
		class Items : SmallMedicMaterial {};
	};

	class I_MachineGunner : I_AutomaticRifleman {
		class Container : I_LightContainer {
			backpack_pool[] = {};
		};
		class Weapons : Weapons {
			class primaryWeapon : SPMG {};
		};
		class Items : SmallMedicMaterial {};
	};

	class B_ATSpecialist : B_MachineGunner {
		class Container : B_LightContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXC {
				magazinesMax = 9;
			};
			class secondaryWeapon : TitanAT {};
		};
	};

	class I_ATSpecialist : I_MachineGunner {
		class Container : I_LightContainer {};
		class Weapons : Weapons {
			class primaryWeapon : F2000C {
				magazinesMax = 9;
			};
			class secondaryWeapon : I_TitanAT {};
		};
	};

	class B_AASpecialist : B_ATSpecialist {
		class Weapons : Weapons {
			class secondaryWeapon : TitanAA {};
		};
	};

	class I_AASpeicalist : I_ATSpecialist {
		class Weapons : Weapons {
			class secondaryWeapon : I_TitanAA {};
		};
	};

	class B_AssistantMachineGunner : B_Rifleman {
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

	class I_AssistantMachineGunner : I_Rifleman {
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

	class B_AssistantAT : B_AssistantMachineGunner {
		class Items : Items {
			other[] = {{"Titan_AT",2},"Titan_AP"};
		};
	};

	class I_AssistantAT : I_AssistantMachineGunner {
		class Items : Items {
			other[] = {{"Titan_AT",2},"Titan_AP"};
		};
	};

	class B_AssistantAA : B_AssistantAT {
		class Items : Items {
			other[] = {{"Titan_AA",2}};
		};
	};

	class I_AssistantAA : I_AssistantAT {
		class Items : Items {
			other[] = {{"Titan_AA",2}};
		};
	};

	class B_Grenadier : B_AutomaticRifleman {
		class Weapons : Weapons {
			class primaryWeapon : MXGL {};
		};
		class Gear : I_NormalSoldierBinocGear {};
	};

	class I_Grenadier : I_AutomaticRifleman {
		class Weapons : Weapons {
			class primaryWeapon : F2000GL {};
		};
		class Gear : I_NormalSoldierBinocGear {};
	};

	class B_DesignatedMarksman : SoldierClass {
		class Container : B_StandardContainer {};
		class Weapons : Weapons {
			class primaryWeapon : ABR {};
			class handGun : basicPistol {};
		};
		class Items : BasicMedicMaterial {};
		class Gear : B_NormalSoldierBinocGear {};
	};

	class I_DesignatedMarksman : SoldierClass {
		class Container : I_StandardContainer {};
		class Weapons : Weapons {
			class primaryWeapon : Mk14 {};
			class handGun : basicPistol_AAF {};
		};
		class Items : BasicMedicMaterial {};
		class Gear : I_NormalSoldierBinocGear {};
	};

	class B_CombatMedic : B_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : MX {};
		};
		class Items : CombatMedicMaterial {};
		onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
	};

	class I_CombatMedic : I_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : F2000 {};
		};
		class Items : CombatMedicMaterial {};
		onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
	};

	class B_Medic : SoldierClass {
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

	class I_Medic : SoldierClass {
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

	class B_FTL : B_Grenadier {
		class Container : B_StandardContainer {};
		class Gear : B_NormalSoldierGPSGear {};
	};

	class I_FTL : I_Grenadier {
		class Container : I_StandardContainer {};
		class Gear : I_NormalSoldierGPSGear {};
	};

	class B_SQL : B_Grenadier {
		class Container : B_RadioRuckContainer {};
		class Gear : B_AdvancedSoldierGear {};
		class Items : SmallMedicMaterial {};
	};

	class I_SQL : I_Grenadier {
		class Container : I_RadioRuckContainer {};
		class Gear : I_AdvancedSoldierGear {};
		class Items : SmallMedicMaterial {};
	};

	class B_Lead : SoldierClass {
		class Container : B_RadioRuckContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXC {};
			class handGun : basicPistol {};
		};
		class Gear : B_OfficerGear {};
		class Items : SmallMedicMaterial {};
	};

	class I_Lead : SoldierClass {
		class Container : I_OfficerContainer {};
		class Weapons : Weapons {
			class primaryWeapon : F2000C {};
			class handGun : basicPistol_AAF {};
		};
		class Gear : I_OfficerGear {};
		class Items : SmallMedicMaterial {};
	};

	class B_MIO : B_Lead {
		class Gear : Gear {
			gps_pool[] = {"b_itemLAPTOP_FT"};
		};
	};

	class I_MIO : I_Lead {
		class Gear : Gear {
			gps_pool[] = {"i_itemLAPTOP_FT"};
		};
	};

	class B_Recon : SoldierClass {
		class Container : B_SpecOpContainer {};
		class Gear : B_SOFSoldierGear {
			gps_pool[] = {};
		};
		class Items : SOFMedicMaterial {};
		class Weapons : Weapons {
			class primaryWeapon : MXM {};
			class handGun : basicPistol {};
		};
	};

	class I_Recon : SoldierClass {
		class Container : I_LightContainer {
			backpack_pool[] = {"B_FieldPack_oli"};
		};
		class Gear : I_SOFSoldierGear {
			gps_pool[] = {};
		};
		class Items : SOFMedicMaterial {};
		class Weapons : Weapons {
			class primaryWeapon : Mk1 {};
			class handGun : basicPistol_AAF {};
		};
	};

	class B_ReconTL : B_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_big"};
		};
		class Gear : B_SOFSoldierGear {};
	};

	class I_ReconTL : I_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_anprc155"};
		};
		class Gear : I_SOFSoldierGear {};
	};

	class B_ReconDM : B_Recon {
		class Weapons : Weapons {
			class primaryWeapon : Mk1 {};
		};
	};

	class I_ReconDM : I_Recon {
		class Weapons : Weapons {
			class primaryWeapon : Cyrus {
				muzzleAttachment_pool[] = {"muzzle_snds_93mmg"};
			};
		};
	};

	class B_ReconUAV : B_Recon {
		class Container : Container {
			backpack_pool[] = {"B_UAV_01_backpack_F"};
		};
		class Gear : Gear {
			gps_pool[] = {"B_UavTerminal"};
		};
	};

	class I_ReconUAV : I_Recon {
		class Container : Container {
			backpack_pool[] = {"I_UAV_01_backpack_F"};
		};
		class Gear : Gear {
			gps_pool[] = {"I_UavTerminal"};
		};
	};

	class B_ReconJTAC : B_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_big"};
		};
		class Weapons : Weapons {
			class primaryWeapon : MXGL_JTAC {
				muzzleAttachment_pool[] = {"muzzle_snds_H"};
			};
		};
		class Gear : B_SOFSoldierGear {
			binocular_pool[] = {"Laserdesignator"};
		};
	};

	class I_ReconJTAC : I_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_anprc155"};
		};
		class Weapons : Weapons {
			class primary : F2000GL_JTAC {
				muzzleAttachment_pool[] = {"muzzle_snds_M"};
			};
		};
		class Gear : I_SOFSoldierGear {
			binocular_pool[] = {"Laserdesignator"};
		};
	};

	class B_JTAC : B_ReconJTAC {
		class Container : B_LightContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXGL_JTAC {};
		};
		class Gear : Gear {
			helmet_pool[] = {
				"H_HelmetB_light",
				"H_HelmetB_light_desert",
				"H_HelmetB_light_grass",
				"H_HelmetB_light_sand",
				"H_HelmetB_light_snakeskin"
			};
		};
	};

	class I_JTAC : I_ReconJTAC {
		class Container : I_LightContainer {};
		class Weapons : Weapons {
			class primaryWeapon : F2000GL_JTAC {};
		};
		class Gear : Gear {
			helmet_pool[] = {"H_HelmetIA"};
		};
	};

	class B_Sniper : SoldierClass {
		class Container : B_GhillieContainer {};
		class Weapons : Weapons {
			class primaryWeapon : Lynx {};
			class handGun : basicPistol {};
		};
		class Gear : B_AdvancedSoldierGear_noHelmet {};
		class Items : SOFMedicMaterial {};
	};

	class I_Sniper : SoldierClass {
		class Container : I_GhillieContainer {};
		class Weapons : Weapons {
			class primaryWeapon : Lynx {};
			class handGun : basicPistol_AAF {};
		};
		class Gear : I_AdvancedSoldierGear_noHelmet {};
		class Items : SOFMedicMaterial {};
	};

	class B_Spotter : B_Sniper {
		class Weapons : Weapons {
			class primaryWeapon : MXM {};
		};
	};

	class I_Spotter : I_Sniper {
		class Weapons : Weapons {
			class primaryWeapon : Mk14 {};
		};
	};

	class B_Crew : SoldierClass {
		class Container : B_CrewContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {};
			class handGun : basicPistol {};
		};
		class Gear : B_CrewGear {};
		class Items : BasicMedicMaterial {};
	};

	class I_Crew : SoldierClass {
		class Container : I_CrewContainer {};
		class Weapons : Weapons {
			class primaryWeapon : F2000C {};
			class handGun : basicPistol_AAF {};
		};
		class Gear : I_CrewGear {};
		class Items : BasicMedicMaterial {};
	};

	class B_Commander : B_Crew {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
		};
	};

	class I_Commander : I_Crew {
		class Container : Container {
			backpack_pool[] = {"tf_anprc155"};
		};
	};

	class B_Pilot : SoldierClass {
		class Container : B_JetPilotContainer {};
		class Weapons : Weapons {
			class primaryWeapon : VectorSMG {
				magazinesMax = 2;
			};
		};
		class Gear : B_PilotGear {};
		class Items : PilotMedicMaterial {};
	};

	class I_Pilot : SoldierClass {
		class Container : I_JetPilotContainer {};
		class Weapons : Weapons {
			class primaryWeapon : PDW2000 {};
		};
		class Gear : I_PilotGear {};
		class Items : PilotMedicMaterial {};
	};

	class B_PilotRadio : B_Pilot {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
		};
	};

	class I_PilotRadio : I_Pilot {
		class Container : Container {
			backpack_pool[] = {"tf_anprc155"};
		};
	};

	class B_HeliPilot : SoldierClass {
		class Container : B_HeliPilotContainer {};
		class Weapons : Weapons {
			class primaryWeapon : VectorSMG {};
		};
		class Gear : B_HeliPilotGear {};
		class Items : PilotMedicMaterial {};
	};

	class I_HeliPilot : SoldierClass {
		class Container : I_HeliPilotContainer {};
		class Weapons : Weapons {
			class primaryWeapon : PDW2000 {};
		};
		class Gear : I_HeliPilotGear {};
		class Items : PilotMedicMaterial {};
	};

	class B_HeliCrew : B_HeliPilot {
		class Container : Container {
			backpack_pool[] = {};
		};
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {};
		};
		class Gear : B_HeliCrewGear {};
	};

	class I_HeliCrew : I_HeliPilot {
		class Container : I_LightContainer {
			backpack_pool[] = {};
		};
		class Weapons : Weapons {
			class primaryWeapon : F2000C {};
		};
		class Gear : I_HeliCrewGear {};
	};

	class B_ParaMedic : B_CombatMedic {
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {};
			class handGun {};
		};
		class Gear : B_HeliCrewGear {};
		onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
	};

	class I_ParaMedic : I_CombatMedic {
		class Weapons : Weapons {
			class pimaryWeapon : F2000C {};
			class handGun {};
		};
		class Gear : I_HeliCrewGear {};
		onApplyLoadout = "_this setVariable ['ace_medical_medicClass',1,true];";
	};

	class B_Logistician : SoldierClass {
		class Container : B_LogisticianContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {
				magazinesMax = 7;
			};
			class handGun : basicPistol {};
		};
		class Gear : B_LogisticsGear {};
		class Items : PilotMedicMaterial {};
	};

	class I_Logistician : SoldierClass {
		class Container : I_ChestRigContainer {};
		class Weapons : Weapons {
			class primaryWeapon : F2000C {};
			class handGun : basicPistol_AAF {};
		};
		class Gear : I_LogisticsGear {};
		class Items : PilotMedicMaterial {};
	};

	class B_LogisticianTL : B_Logistician {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
		};
	};

	class I_LogisticianTL : I_Logistician {
		class Container : Container {
			backpack_pool[] = {"tf_anprc155"};
		};
	}
};
