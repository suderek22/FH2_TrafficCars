// TrafficCars - lets traffic cars be used like any other car by emptying the
// game database's TrafficCars table (through the FH2 Mod Platform's add_sql).
#include "fh2mod.h"

namespace {
constexpr char kVersion[] = "1.0.0";
}

FH2MOD_EXPORT int fh2mod_init(const FH2ModApi* api) {
    if (!api || api->api_version < 3 || !api->register_mod || !api->log || !api->add_sql) {
        return 1;
    }
    FH2ModInfo info{};
    info.size = sizeof(info);
    info.name = "TrafficCars";
    info.version = kVersion;
    info.platform_version = "2.8.0";
    info.github_repo = "suderek22/FH2_TrafficCars";
    info.check_updates = 1;
    info.description = "Empties the game's TrafficCars table so traffic cars can be used.";
    FH2Mod* mod = api->register_mod(&info);
    if (!mod) {
        return 1;
    }
    api->add_sql(mod, "DELETE FROM TrafficCars;");
    api->log(mod, "Registered; TrafficCars table will be emptied in the database copy.");
    return 0;
}
