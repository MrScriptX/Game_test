#include "application.h"
#include "server.h"

#define WIDTH_WIN 1280
#define HEIGHT_WIN 720

int main()
{
	int port = 0;
	std::cin >> port;

	Server server(port);

	while (1)
	{
		server.ListenToClient();
	}

	//sf::RenderWindow mainWindow(sf::VideoMode(WIDTH_WIN, HEIGHT_WIN), "Window");
	//Game_loop(&mainWindow);

	
}