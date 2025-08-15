#pragma once

#include <iostream>

namespace freg {
    enum MagicType {
        FIRE,
        WATER,
        EARTH,
        AIR,
        DINOSAUR,
        METEOR
    };

    std::string to_string(MagicType mt);
}