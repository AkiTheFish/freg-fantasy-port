#include "../include/player.hpp"

namespace freg {
    std::string Player::getStats() {
        return Entity::getStats() + "\nmagic: " + to_string(magic);
    }   
}