#pragma once

#include "Level.h"

class Game {
private:
	Level _lvl;
    void getInput();
public:
	Game();
	void newLevel();
	void endLevel();
	void draw();
};
