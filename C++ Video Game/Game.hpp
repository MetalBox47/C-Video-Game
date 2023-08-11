// Game.hpp
// 2D Game Engine

#ifndef Game_hpp
#define Game_hpp

#include "SDL.h"
#include <stdio.h>
#include <iostream>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();

	bool isRunning() { return running; }

private:

	int count;
	bool running;
	SDL_Window* window;
	SDL_Renderer* renderer;


};

#endif /* Game_hpp */