#include "../include/enemies.hpp"
#include "../include/player.hpp"
#include "../include/game.hpp"

#define PRINT(x) std::cout << x << std::endl;

int main(void) {
    freg::Game* game = new freg::Game;

    game->run();

    delete game;

    return 0;
}