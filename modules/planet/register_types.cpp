#include "register_types.h"
#include "core/object/class_db.h"
#include "planet.h"

void initialize_planet_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
    ClassDB::register_class<Planet>();
}

void uninitialize_planet_module(ModuleInitializationLevel p_level) {
    // Cleanup if necessary
}
