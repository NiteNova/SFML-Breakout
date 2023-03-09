#include "ball.h"
#include <SFML/Graphics.hpp>

ball::ball(int x, int y) {
	xpos = x;
	ypos = y;

}

void ball::draw(sf::RenderWindow& window) {
	sf::CircleShape circle(20);
	circle.setFillColor((sf::Color(255, 255, 255)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);
}
void ball::move(sf::RenderWindow& window) {
	xpos += -0.01; 
	ypos += -0.01;
}