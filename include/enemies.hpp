#pragma once

#include "entities.hpp"
#include "magic.hpp"

namespace freg {
    class Enemy : public Entity {
        public:
        Enemy(std::string name, int health, int damage, MagicType weakness) 
            : Entity(name, health, damage), weakness{weakness}
        {};
        ~Enemy();

        std::string getStats() override;

        private:
        MagicType weakness;
    };
}