#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH };
        authors[] = { "Jules"};
        VERSION_CONFIG;
    };
};

#include <CfgMusic.hpp>

