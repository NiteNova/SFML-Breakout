#include <SFML/Graphics.hpp>
#include "bricks.h"
#include "ball.h"



//instantiate some bricks
brick b1(50, 50);
brick b2(200, 50);
brick b3(350, 50);
brick b4(500, 50);
brick b5(650, 50);
brick b6(50, 150);
brick b7(200, 150);
brick b8(350, 150);
brick b9(500, 150);
brick b10(650, 150);

ball ball1(500, 500);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;




	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------
		ball1.move(window);

		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);
		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);

		ball1.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main