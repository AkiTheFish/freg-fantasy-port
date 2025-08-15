#include "../include/game.hpp"
#include <charconv>

namespace freg {
    Game::~Game() {};

    void Game::run() {
        //
        PRINT("what's your name?\n");
        std::cin >> playerName;

        askMagic();

        PRINT("\nyou chose <" + to_string(magic) + "> as your magic");
    
        //create player object with choices made beforehand
        Player* player = new Player(playerName, 10, 5, magic);
        Enemy enemy = Enemy::pickEnemy(3);

        delete player;
    }

    void Game::askMagic() {
        //print magic shit
        PRINT("\n\nwhich magic would you like?\n")
        PRINT(" 1 - fire\n")
        PRINT(" 2 - water\n")
        PRINT(" 3 - earth\n")
        PRINT(" 4 - air\n")
        PRINT(" 5 - dinosaur\n")
        PRINT(" 6 - meteor\n")
        
        //store magic type for user input
        std::cin >> magicChoice;
    
        //for user input
        switch (magicChoice) {
            case 1: magic = FIRE; break;
            case 2: magic = WATER; break;
            case 3: magic = EARTH; break;
            case 4: magic = AIR; break;
            case 5: magic = DINOSAUR; break;
            case 6: magic = METEOR; break;
            default: PRINT("invalid choice. choose numbers corresponding to each magic type"); break;
        };

        PRINT("\nare you sure you want to choose <" + to_string(magic) + "> as your magic? (y/n)\n");
        std::cin >> confirmation;
        switch (confirmation) {
            case 'y': break;
            case 'n': askMagic(); break;
            default: PRINT("invalid choice, please choose y or n"); break;
        };
    }
}