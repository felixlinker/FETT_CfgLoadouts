#ifdef GIVE_NV
	#define B_NV "NVGoggles"
	#define I_NV "NVGoggles_INDEP"
	#define O_NV "NVGoggles_OPFOR"
#else
	#define B_NV
	#define I_NV
	#define O_NV
#endif

class B_BasicGear : GearClass {
	goggle_pool[] = {};
	nightvision_pool[] = {B_NV};
	binocular_pool[] = {};
	map_pool[] = {"itemMap"};
	gps_pool[] = {};
	radios[] = {"ACRE_PRC343"};
	compass_pool[] = {"ItemCompass"};
	clock_pool[] = {"ItemWatch"};
	special[] = {"ACE_EarPlugs"};
};

class B_BinocGear : B_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class B_GPSGear : B_BinocGear {
	gps_pool[] = {"b_EasyTrack_PDA"};
};

class B_RangefinderGear : B_GPSGear {
	binocular_pool[] = {"Rangefinder"};
};

class I_BasicGear : B_BasicGear {
	nightvision_pool[] = {I_NV};
};

class I_BinocGear : I_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class I_GPSGear : I_BinocGear {
	gps_pool[] = {"i_EasyTrack_PDA"};
};

class I_RangefinderGear : I_GPSGear {
	binocular_pool[] = {"Rangefinder"};
};

class O_BasicGear : B_BasicGear {
	nightvision_pool[] = {O_NV};
};

class O_BinocGear : O_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class O_GPSGear : O_BinocGear {
	gps_pool[] = {"o_EasyTrack_PDA"};
};

class O_RangefinderGear : O_GPSGear {
	binocular_pool[] = {"Rangefinder"};
};
