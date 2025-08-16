#pragma once

#include "enemies.hpp"
#include "player.hpp"
#include <iostream>

#define PRINT(x) std::cout << x << std::endl;

namespace freg {
    class Game {
        public:
        Game() = default;
        ~Game();

        void run();

        private:
        void askMagic();

        std::string playerName;
        char confirmation;

        MagicType magic;

        int magicChoice;

        Player* player;
    };
}