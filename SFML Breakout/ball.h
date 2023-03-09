#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class ball {
private:
	int xpos;
	int ypos;
public:
	ball(int x, int y);
	void draw(sf::RenderWindow& window);
	void move(sf::RenderWindow& window);
};

