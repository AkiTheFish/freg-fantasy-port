#pragma once

#include <string>
#include <iostream>

namespace freg {
    class Entity {
        public:
        Entity(std::string name, int health, int damage) 
            : name{name}, health{health}, damage{damage} 
        {};
        ~Entity();

        virtual std::string getStats();

        std::string getName();

        int getHealth();
        int getDamage();

        private:
        const int health, damage;

        std::string name;
    };
}