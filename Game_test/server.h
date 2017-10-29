#pragma once


#include <SFML\Network.hpp>
#include <SFML\System.hpp>
#include <iostream>
#include <string>
#include <thread>


class Server
{
public:
	Server(int port);

	void ClientHandlerThread(int ID);
	void ListenToClient();


private:
	sf::TcpListener m_listener;
	sf::TcpSocket m_client[10];
	std::thread m_clientThread[10];

	short int m_connectedClient;

};