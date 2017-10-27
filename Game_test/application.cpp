#include "application.h"

void Game_loop(sf::RenderWindow *window)
{
	std::clog << "Generating window..." << std::endl;

	while (window->isOpen())
	{
		sf::Event loopEvent;
		
		while (window->pollEvent(loopEvent))//add a new event each time window is open
		{
			if (loopEvent.type == sf::Event::Closed)
			{
				window->close();
			}

			window->display();
		}
	}
}