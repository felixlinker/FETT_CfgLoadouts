#include "CfgDefines.hpp"
#include "CfgContainers.hpp"
#include "CfgGear.hpp"
#include "CfgItems.hpp"
#include "CfgWeapons.hpp"

class CfgLoadouts {
	class B_Rifleman : SoldierClass {
		class Container : B_MediumContainer {
			vest_pool[] = {"V_PlateCarrier2_rgr"};
		};
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

	class B_RiflemanAT : B_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : MX {};
			class secondaryWeapon : PCML {};
		};
		class Items : BasicMedicMaterial {};
	};

	class B_AutomaticRifleman : B_Rifleman {
		class Container : B_HeavySoldierContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXSW {};
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

	class B_ATSpecialist : B_MachineGunner {
		class Container : B_LightContainer {};
		class Weapons : Weapons {
			class primaryWeapon : MXC {
				magazinesMax = 9;
			};
			class secondaryWeapon : TitanAT {};
		};
	};

	class B_AASpecialist : B_ATSpecialist {
		class Weapons : Weapons {
			class secondaryWeapon : TitanAA {};
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

	class B_AssistantAT : B_AssistantMachineGunner {
		class Items : Items {
			other[] = {{"Titan_AT",2},"Titan_AP"};
		};
	};

	class B_AssistantAA : B_AssistantAT {
		class Items : Items {
			other[] = {{"Titan_AA",2}};
		};
	};

	class B_Grenadier : B_AutomaticRifleman {
		class Weapons : Weapons {
			class primaryWeapon : MXGL {};
		};
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

	class B_CombatMedic : B_Rifleman {
		class Weapons : Weapons {
			class primaryWeapon : MX {};
		};
		class Items : CombatMedicMaterial {};
	};

	class B_Medic : SoldierClass {
		class Container : B_BigContainer {
			vest_pool[] = {"V_Chestrig_rgr","V_Chestrig_khk"};
		};
		class Weapons : Weapons {
			class primaryWeapon : MXC {
				magazinesMax = 9;
			};
			class handGun : basicPistol {};
		};
		class Gear : B_NormalSoldierGPSGear {};
		class Items : MedicMaterial {};
	};

	class B_FTL : B_Grenadier {
		class Gear : B_NormalSoldierGPSGear {};
	};

	class B_SQL : B_Grenadier {
		class Container : B_RadioRuckContainer {};
		class Gear : B_AdvancedSoldierGear {};
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

	class B_MIO : B_Lead {
		class Gear : Gear {
			gps_pool[] = {"b_itemLAPTOP_FT"};
		};
	};

	class B_Recon : SoldierClass {
		class Container : B_SpecOpContainer {};
		class Gear : B_SOFSoldierGear {
			binocular_pool[] = {"Binocular"};
			gps_pool[] = {};
		};
		class Items : SOFMedicMaterial {};
		class Weapons : Weapons {
			class primaryWeapon : MXM {};
			class handGun : basicPistol {};
		};
	};

	class B_ReconTL : B_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_big"};
		};
		class Gear : B_SOFSoldierGear {};
	};

	class B_ReconDM : B_Recon {
		class Weapons : Weapons {
			class primaryWeapon : Mk1 {};
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

	class B_ReconJTAC : B_Recon {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_big"};
		};
		class Weapons : Weapons {
			class primaryWeapon : MXGL_JTAC {
				barrelAttachment_pool[] = {"muzzle_snds_H"};
			};
		};
		class Gear : B_SOFSoldierGear {
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

	class B_Sniper : SoldierClass {
		class Container : B_GhillieContainer {};
		class Weapons : Weapons {
			class primaryWeapon : Lynx {};
			class handGun : basicPistol {};
		};
		class Gear : B_AdvancedSoldierGear_noHelmet {};
		class Items : SOFMedicMaterial {};
	};

	class B_Spotter : B_Sniper {
		class Weapons : Weapons {
			class primaryWeapon : MXM {};
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

	class B_Commander : B_Crew {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
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

	class B_PilotRadio : B_Pilot {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
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

	class B_HeliCrew : B_HeliPilot {
		class Container : Container {
			backpack_pool[] = {};
		};
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {};
		};
		class Gear : B_HeliCrewGear {};
	};

	class B_ParaMedic : B_CombatMedic {
		class Weapons : Weapons {
			class primaryWeapon : MXCBlack {};
			class handGun {};
		};
		class Gear : B_HeliCrewGear {};
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

	class B_LogisticianTL : B_Logistician {
		class Container : Container {
			backpack_pool[] = {"tf_rt1523g_black"};
		};
	};
};
