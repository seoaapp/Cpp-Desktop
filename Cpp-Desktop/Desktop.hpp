#ifndef Desktop_hpp
#define Desktop_hpp

#include "SDL.h"
#include <iostream>

class Desktop {

public:
	Desktop();
	~Desktop();

	void init(const char* title, int xpox, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void updata();
	void render();
	void clean();
	bool running() { return isRunning; }
private:
	int cnt = 0;
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};

#endif /* Desktop_hpp */