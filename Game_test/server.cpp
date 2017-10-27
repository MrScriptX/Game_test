#include "server.h"


Server::Server(int port)
{
	if (m_listener.listen(port) != sf::Socket::Done)//Listen to port
	{
		std::cerr << "Failed to start open port! Server::Server : 8" << std::endl;
	}
}

void Server::ListenToClient()
{
	if (m_listener.accept(m_client[m_connectedClient]) != sf::Socket::Done)//connect client to server
	{
		std::cerr << "Client failed to connect! Server::Server : 13" << std::endl;
	}
}

void Server::ClientHandlerThread(int ID)
{

}