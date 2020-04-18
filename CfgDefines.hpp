class ContainerClass {
	helmet_pool[] = {};
	uniform_pool[] = {};
	vest_pool[] = {};
	backpack_pool[] = {};
};

class GearClass {
	goggle_pool[] = {};
	nightvision_pool[] = {};
	binocular_pool[] = {};
	map_pool[] = {};
	gps_pool[] = {};
	radio_pool[] = {};
	compass_pool[] = {};
	clock_pool[] = {};
	special[] = {};
};

class WeaponClass {
	weapon_pool[] = {};
	muzzleAttachment_pool[] = {};
	weaponRestingAttachment_pool[] = {};
	barrelAttachment_pool[] = {};
	scope_pool[] = {};
	optional[] = {};
	magazine = "";
	magazineTracer = "";
	magazinesMax = 0;
	magazinesTracerEvery = 3;
};

class ItemsClass {
	grenades[] = {};
	medicMaterial[] = {};
	other[] = {};
};

class SoldierClass {
	class Container : ContainerClass {};
	class Gear : GearClass {};
	class Weapons {
		class primaryWeapon : WeaponClass {};
		class secondaryWeapon : WeaponClass {};
		class handGun : WeaponClass {};
	};
	class Items : ItemsClass {};
	onApplyLoadout = "";
};
