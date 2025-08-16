#include "../include/enemies.hpp"

#include <iostream>
#include <cctype>

namespace freg {
    Enemy::~Enemy() {};

    Enemy Enemy::pickEnemy(const int choice) {
        //jerry
        std::string jName = "jerry";
        float jHealth = 20;
        float jDmg = 10;
        MagicType jWeakness = WATER;

        //tiggeh
        std::string tName = "tiggeh";
        float tHealth = 10;
        float tDmg = 30;
        MagicType tWeakness = DINOSAUR;

        //nugget
        std::string nName = "n-nugget";
        float nHealth = 30;
        float nDmg = 5;
        MagicType nWeakness = METEOR;

        //randomizer that idk how to implement

        //------------------------------------

        switch (choice) {
            case 1: return Enemy(jName, jHealth, jDmg, jWeakness);
            case 2: return Enemy(tName, tHealth, tDmg, tWeakness);
            case 3: return Enemy(nName, nHealth, nDmg, nWeakness);
            default: std::cout << "couldn't pick chr\n";
        }
    }

    std::string Enemy::getStats() {
        return Entity::getStats() + "\nweakness: " + to_string(weakness);
    }
}