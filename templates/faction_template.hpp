#ifndef PREFIX
	#define PREFIX
#endif

#define WITH_PREFIX(clazz) PREFIX##clazz

class WITH_PREFIX(Soldier) : SoldierClass {
	class Container : Container {
		helmet_pool[] = STD_HELMETS;
		uniform_pool[] = STD_UNIFORMS;
		vest_pool[] = STD_VESTS;
	};
	class Gear : BasicGear {
		nightvision_pool[] = NV;
		gps_pool[] = PDA;
	};
	class Weapons : Weapons {
		class primaryWeapon : STD_WEAPON {};
		class handGun : HANDGUN {};
	};
	class Items : BasicItems {};
};

class WITH_PREFIX(Officer) : WITH_PREFIX(Soldier) {
	class Container : Container {
		helmet_pool[] = LEAD_HELMETS;
		uniform_pool[] = LEAD_UNIFORMS;
		vest_pool[] = SMALL_VESTS;
	};
	class Gear : Gear {
		radios[] = {"ACRE_PRC343","ACRE_PRC148"};
		binocular_pool[] = {"Binocular"};
		special[] = {"ACE_EarPlugs","ACE_MapTools"};
	};
	class Weapons : Weapons {
		class primaryWeapon : SMG_WEAPON {};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(Squadleader) : WITH_PREFIX(Officer) {
	class Container : Container {
		helmet_pool[] = SPEC_HELMETS;
		uniform_pool[] = STD_UNIFORMS;
		vest_pool[] = GL_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : GL_WEAPON {
			magazinesMax = 4;
			optional[] = {GL_HuntIR_AMMO};
		};
	};
};

class WITH_PREFIX(JTAC) : WITH_PREFIX(Squadleader) {
	class Weapons : Weapons {
		class primaryWeapon : primaryWeapon {
			optional[] = {GL_JTAC_AMMO};
		};
	};
	class Gear : Gear {
		binocular_pool[] = {"Laserdesignator"};
		special[] = {"ACE_EarPlugs","ACE_MapTools"};
	};
	class Items : SpecialGrenadesSmall {};
};

class WITH_PREFIX(Fireteamleader) : WITH_PREFIX(Soldier) {
	class Container : Container {
		helmet_pool[] = SPEC_HELMETS;
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
		special[] = {"ACE_EarPlugs","ACE_MapTools"};
	};
};

class WITH_PREFIX(Rifleman) : WITH_PREFIX(Soldier) {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
		backpack_pool[] = SMALL_BACKPACKS;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {
			optional[] = {
				{STD_WEAPON_MAG, 4},
				{AR_WEAPON_MAG, 3}
			};
		};
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
	};
};

class WITH_PREFIX(RiflemanAT) : WITH_PREFIX(Rifleman) {
	class Weapons : Weapons {
		class secondaryWeapon : LAUNCHER_WEAPON {};
	};
};

class WITH_PREFIX(AutomaticRifleman) : WITH_PREFIX(Soldier) {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : AR_WEAPON {};
	};
};

class WITH_PREFIX(HeavyGunner) : WITH_PREFIX(AutomaticRifleman) {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : MMG_WEAPON {};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(Grenadier) : WITH_PREFIX(Soldier) {
	class Container : Container {
		vest_pool[] = GL_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : GL_WEAPON {};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(DesignatedMarksman) : WITH_PREFIX(Soldier) {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : DMR_WEAPON {};
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
	};
};

class WITH_PREFIX(ATSpecialist) : WITH_PREFIX(Soldier) {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
		backpack_pool[] = SMALL_BACKPACKS;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {
			magazinesMax = 4;
		};
		class secondaryWeapon : LAUNCHER_HEAVY_WEAPON {};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(CombatMedic) : WITH_PREFIX(Rifleman) {
	class Container : Container {
		vest_pool[] = HEAVY_VESTS;
	};
	class Gear : BasicGear {};
	class Items : CombatMedicItems {};
};

class WITH_PREFIX(Medic): WITH_PREFIX(CombatMedic) {
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {};
	};
	class Container : Container {
		vest_pool[] = SMALL_VESTS;
		backpack_pool[] = MED_BACKPACKS;
	};
	class Items : MedicItems {};
};

class WITH_PREFIX(AmmoBearerMMG) : WITH_PREFIX(Soldier) {
	class Container : Container {
		backpack_pool[] = MED_BACKPACKS;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {
			magazinesMax = 4;
			optional[] = {
				{MMG_WEAPON_MAG, 3}
			};
		};
	};
	class Gear : Gear {
		binocular_pool[] = {"Rangefinder"};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(AmmoBearerAT) : WITH_PREFIX(AmmoBearerMMG) {
	class Weapons : Weapons {
		class primaryWeapon : primaryWeapon {
			optional[] = {
				{LAUNCHER_HEAVY_WEAPON_MAG_1, 2},
				{LAUNCHER_HEAVY_WEAPON_MAG_2, 1}
			};
		};
	};
};

class WITH_PREFIX(Commander) : WITH_PREFIX(Soldier) {
	class Container : Container {
		helmet_pool[] = CREW_HELMETS;
		uniform_pool[] = CREW_UNIFORMS;
		vest_pool[] = SMALL_VESTS;
	};
	class Gear : Gear {
		radios[] = {"ACRE_PRC343","ACRE_PRC148"};
		special[] = {"ACE_EarPlugs","ACE_MapTools"};
	};
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {
			magazinesMax = 2;
		};
		class handGun : HANDGUN {};
	};
	class Items : SmallItems {};
};

class WITH_PREFIX(Crew) : WITH_PREFIX(Commander) {
	class Gear : BasicGear {};
};

class WITH_PREFIX(HeliPilot) : WITH_PREFIX(Commander) {
	class Container : Container {
		helmet_pool[] = HELI_HELMETS;
		uniform_pool[] = HELI_UNIFORMS;
		vest_pool[] = TAC_VEST;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMG_WEAPON {};
	};
};

class WITH_PREFIX(HeliCrew) : WITH_PREFIX(HeliPilot) {
	class Container : Container {
		helmet_pool[] = HELI_CREW_HELMETS;
		uniform_pool[] = HELI_CREW_UNIFORMS;
		vest_pool[] = TAC_VEST;
	};
	class Gear : BasicGear {};
};

class WITH_PREFIX(Sniper) : WITH_PREFIX(Soldier) {
	class Container {
		uniform_pool[] = GHILLIE_UNIFORMS;
		vest_pool[] = CARRIER_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : SNIPER_WEAPON {};
	};
	class Items : SpecialGrenadesSmall {};
};

class WITH_PREFIX(Spotter) : WITH_PREFIX(Sniper) {
	class Weapons : Weapons {
		class primaryWeapon : DMR_WEAPON {};
	};
	class Gear : Gear {
		binocular_pool[] = {"Laserdesignator"};
		special[] = {"ACE_EarPlugs","ACE_MapTools","ACE_Clacker","ACE_RangeCard"};
	};
	class Items : Items {
		other[] = {
			{SNIPER_WEAPON_MAG,2},
			"ClaymoreDirectionalMine_Remote_Mag",
			"APERSTripMine_Wire_Mag"
		};
	};
};
