class MX : WeaponClass {
	skin = "sand";
	class weapon_pool {
		sand[] = {"arifle_MX_F"};
		black[] = {"arifle_MX_Black_F"};
		khaki[] = {"arifle_MX_khk_F"};
	};
	scope_pool[] = {"optic_Aco"};
	barrelAttachment_pool[] = {"acc_pointer_IR"};
	class magazine {
		sand = "30Rnd_65x39_caseless_mag";
		black = "30Rnd_65x39_caseless_black_mag";
		khaki = "30Rnd_65x39_caseless_khaki_mag";
	};
	class magazineTracer {
		sand = "30Rnd_65x39_caseless_mag_Tracer";
		black = "30Rnd_65x39_caseless_black_mag_Tracer";
		khaki = "30Rnd_65x39_caseless_khaki_mag_Tracer";
	};
	magazinesMax = 6;
};

class MXM : MX {
	class weapon_pool {
		sand[] = {"arifle_MXM_F"};
		black[] = {"arifle_MXM_Black_F"};
		khaki[] = {"arifle_MXM_khk_F"};
	};
	class scope_pool {
		sand[] = {"optic_Hamr"};
		black[] = {"optic_Hamr"};
		khaki[] = {"optic_Hamr_khk_F"};
	};
	class weaponRestingAttachment_pool {
		sand[] = {"bipod_01_F_snd"};
		black[] = {"bipod_01_F_blk"};
		khaki[] = {"bipod_01_F_khk"};
	};
};

class MXGL : MX {
	class weapon_pool {
		sand[] = {"arifle_MX_GL_F"};
		black[] = {"arifle_MX_GL_Black_F"};
		khaki[] = {"arifle_MX_GL_khk_F"};
	};
	optional[] = {GL_AMMO};
};

class MXGL_HuntIR : MXGL {
	magazinesMax = 4;
	optional[] = {GL_HuntIR_AMMO};
};

class MXGL_JTAC : MXGL {
	optional[] = {GL_JTAC_AMMO};
};

class MXSW : WeaponClass {
	skin = "sand";
	class weapon_pool {
		sand[] = {"arifle_MX_SW_F"};
		black[] = {"arifle_MX_SW_Black_F"};
		khaki[] = {"arifle_MX_SW_khk_F"};
	};
	class weaponRestingAttachment_pool {
		sand[] = {"bipod_01_F_snd"};
		black[] = {"bipod_01_F_blk"};
		khaki[] = {"bipod_01_F_khk"};
	};
	class magazine {
		sand = "100Rnd_65x39_caseless_mag";
		black = "100Rnd_65x39_caseless_black_mag";
		khaki = "100Rnd_65x39_caseless_khaki_mag";
	};
	class magazineTracer {
		sand = "100Rnd_65x39_caseless_mag_Tracer";
		black = "100Rnd_65x39_caseless_black_mag_tracer";
		khaki = "100Rnd_65x39_caseless_khaki_mag_tracer";
	};
	magazinesMax = 6;
};

class MXC : MX {
	class weapon_pool {
		sand[] = {"arifle_MXC_F"};
		black[] = {"arifle_MXC_Black_F"};
		khaki[] = {"arifle_MXC_khk_F"};
	};
};
