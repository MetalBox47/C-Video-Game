// C++ Video Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Needs SDL2 v2.28.2 from https://github.com/libsdl-org/SDL/releases/tag/release-2.28.2
// Specifically the "SDL2-devel-2.28.2-VC.zip" package

#include "Game.hpp"

Game* game = nullptr;

int main(int argc, char *argv[])
{

    game = new Game();
    game->init("TestGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->isRunning()) {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}

