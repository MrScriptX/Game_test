#include <stdio.h>
#include <SFML\OpenGL.hpp>
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "Window");

	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}

		mainWindow.display();
	}
}