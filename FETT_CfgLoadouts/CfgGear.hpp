class B_BasicGear : GearClass {
	goggle_pool[] = {};
	nightvision_pool[] = {"NVGoggles"};
	binocular_pool[] = {};
	map_pool[] = {};
	gps_pool[] = {};
	radio_pool[] = {"tf_anprc152"};
	compass_pool[] = {"ItemCompass"};
	clock_pool[] = {"ItemWatch"};
	special[] = {"ACE_microDAGR"};
};

class B_NormalSoldierBinocGear : B_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class B_NormalSoldierGPSGear : B_NormalSoldierBinocGear {
	gps_pool[] = {"b_EasyTrack_PDA"};
};

class B_AdvancedSoldierGear : B_NormalSoldierGPSGear {
	binocular_pool[] = {"Rangefinder"};
};

class I_BasicGear : B_BasicGear {
	nightvision_pool[] = {"NVGoggles_INDEP"};
	radio_pool[] = {"tf_anprc148jem"};
};

class I_NormalSoldierBinocGear : I_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class I_NormalSoldierGPSGear : I_NormalSoldierBinocGear {
	gps_pool[] = {"i_EasyTrack_PDA"};
};

class I_AdvancedSoldierGear : I_NormalSoldierGPSGear {
	binocular_pool[] = {"Rangefinder"};
};

class O_BasicGear : B_BasicGear {
	nightvision_pool[] = {"NVGoggles_OPFOR"};
	radio_pool[] = {"tf_fadak"};
};

class O_NormalSoldierBinocGear : O_BasicGear {
	binocular_pool[] = {"Binocular"};
};

class O_NormalSoldierGPSGear : O_NormalSoldierBinocGear {
	gps_pool[] = {"o_EasyTrack_PDA"};
};

class O_AdvancedSoldierGear : O_NormalSoldierGPSGear {
	binocular_pool[] = {"Rangefinder"};
};
