#pragma once


#include <SFML\Network.hpp>
#include <iostream>
#include <string>


class Server
{
public:
	Server(int port);

	void ClientHandlerThread(int ID);
	void ListenToClient();


private:
	sf::TcpListener m_listener;
	sf::TcpSocket m_client[10];

	short int m_connectedClient;

};