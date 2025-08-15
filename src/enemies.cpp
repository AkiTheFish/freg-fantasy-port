#include "../include/enemies.hpp"

#include <iostream>
#include <cctype>

namespace freg {
    Enemy::~Enemy() {};

    std::string Enemy::getStats() {
        return Entity::getStats() + "\nweakness: " + to_string(weakness);
    }
}