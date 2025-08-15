#include "../include/magic.hpp"

namespace freg {
    std::string to_string(MagicType mt) {
        switch (mt) {
            case FIRE: return "fire";
            case WATER: return "water";
            case EARTH: return "earth";
            case AIR: return "air";
            case DINOSAUR: return "dinosaur";
            case METEOR: return "meteor";
            default: return "";
        }
    }
}