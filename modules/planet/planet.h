#ifndef PLANET_H
#define PLANET_H

#include "scene/3d/node_3d.h"

class Planet : public Node3D {
    GDCLASS(Planet, Node3D);

protected:
    static void _bind_methods();

public:
    Planet();
    ~Planet();

    void _notification(int p_what);

    // Methods for setting heightmaps, procedural generation, etc.
    void set_heightmap(const Ref<Image> &heightmap, int face);
    // ... Additional methods
};

#endif // PLANET_H
