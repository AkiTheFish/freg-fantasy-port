#pragma once

#include "entities.hpp"
#include "magic.hpp"
#include <string>

namespace freg {
    class Player : public Entity{
        public:
        Player(std::string name, int health, int damage, MagicType magic) 
            : Entity(name, health, damage), magic{magic}
        {};

        std::string getStats() override;

        protected:
        MagicType magic;
    };
}