#ifdef GIVE_NV
	#define B_NV "NVGoggles"
	#define I_NV "NVGoggles_INDEP"
	#define O_NV "NVGoggles_OPFOR"
#else
	#define B_NV
	#define I_NV
	#define O_NV
#endif

class BasicGear : GearClass {
	map_pool[] = {"itemMap"};
	radios[] = {"ACRE_PRC343"};
	compass_pool[] = {"ItemCompass"};
	clock_pool[] = {"ItemWatch"};
	special[] = {"ACE_EarPlugs"};
};
