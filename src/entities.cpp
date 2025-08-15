#include "../include/entities.hpp"

namespace freg {
    Entity::~Entity() {};

    std::string Entity::getName() {
        return name;
    }

    int Entity::getHealth() {
        return health;
    }

    int Entity::getDamage() {
        return damage;
    }

    std::string Entity::getStats() {
        return "name: " + name + "\nhealth: " + std::to_string(health) + "\ndamage: " + std::to_string(damage);
    }
}