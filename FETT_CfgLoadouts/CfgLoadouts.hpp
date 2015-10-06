#include "CfgDefines.hpp"
#include "CfgContainers.hpp"
#include "CfgGear.hpp"
#include "CfgItems.hpp"
#include "CfgWeapons.hpp"

class CfgLoadouts {
	class BLU_F {
		#include "CfgLoadouts_nato.hpp"
	};
	class OPF_F {
		#include "CfgLoadouts_csat.hpp"
	};
	class IND_F {
		#include "CfgLoadouts_aaf.hpp"
	};
};
