#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH , "A3_Map_Abramia"};
        authors[] = { "Jules"};
        VERSION_CONFIG;
    };
};

#include <CfgVehicles.hpp>
#include <CfgMagazines.hpp>
#include <CfgWeapons.hpp>
#include <CfgAmmo.hpp>
#include <CfgWorlds.hpp>