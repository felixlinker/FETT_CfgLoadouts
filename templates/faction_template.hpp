class Soldier : SoldierClass {
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

class Officer : Soldier {
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

class Squadleader : Officer {
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

class Fireteamleader : Soldier {
	class Container : Container {
		helmet_pool[] = SPEC_HELMETS;
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
		special[] = {"ACE_EarPlugs","ACE_MapTools"};
	};
};

class Rifleman : Soldier {
	class Container : Container {
		backpack_pool[] = SMALL_BACKPACKS;
	};
	class Weapons : Weapons {
		class primaryWeapon : primaryWeapon {
			// TODO: fill with ammo
			optional[] = {};
		};
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
	};
};

class RiflemanAT : Rifleman {
	class Weapons : Weapons {
		class secondaryWeapon : LAUNCHER_WEAPON {};
	};
};

class AutomaticRifleman : Soldier {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : AR_WEAPON {};
	};
};

class HeavyGunner : AutomaticRifleman {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : MMG_WEAPON {};
	};
	class Items : SmallItems {};
};

class Grenadier : Soldier {
	class Container : Container {
		vest_pool[] = GL_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : GL_WEAPON {};
	};
	class Items : SmallItems {};
};

class DesignatedMarksman : Soldier {
	class Container : Container {
		vest_pool[] = LIGHT_VESTS;
	};
	class Weapons : Weapons {
		class primaryWeapon : DMR_WEAPON {};
	};
	class Gear : Gear {
		binocular_pool[] = {"Binocular"};
		special[] = {"ACE_EarPlugs","ACE_RangeCard"};
	};
};

class ATSpecialist : Soldier {
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

class CombatMedic : Rifleman {
	class Container : Container {
		vest_pool[] = HEAVY_VESTS;
	};
	class Gear : BasicGear {};
	class Items : CombatMedicItems {};
};

class AmmoBearer : Soldier {
	class Container : Container {
		backpack_pool[] = MED_BACKPACKS;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMALL_WEAPON {
			magazinesMax = 4;
			// TODO: fill with ammo
			optional[] = {};
		};
	};
	class Gear : Gear {
		binocular_pool[] = {"Rangefinder"};
	};
	class Items : SmallItems {};
};

class Commander : Soldier {
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

class Crew : Commander {
	class Gear : BasicGear {};
};

class HeliPilot : Commander {
	class Container : Container {
		helmet_pool[] = HELI_HELMETS;
		uniform_pool[] = HELI_UNIFORMS;
		vest_pool[] = TAC_VEST;
	};
	class Weapons : Weapons {
		class primaryWeapon : SMG_WEAPON {};
	};
};

class HeliCrew : HeliPilot {
	class Container : Container {
		helmet_pool[] = HELI_CREW_HELMETS;
		uniform_pool[] = HELI_CREW_UNIFORMS;
		vest_pool[] = TAC_VEST;
	};
	class Gear : BasicGear {};
};
