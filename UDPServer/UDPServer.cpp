#include "UDPServer.h"

UdpServer::UdpServer(int serverPort, int clientPort) {

	this->serverPort = serverPort;
	this->clientPort = clientPort;
	pSocket = new QUdpSocket;

	pSocket->bind ( QHostAddress::LocalHost, serverPort );

	connect (
		pSocket,
		SIGNAL ( readyRead() ),
		this,
		SLOT ( onMessageReceived() )
	);	

	char msg[] = "Hi from UDP Server !";	

	pSocket->writeDatagram( msg, sizeof(msg), QHostAddress::LocalHost, clientPort  );
	pSocket->flush();
}

void UdpServer::onMessageReceived() {
	qDebug() << "Message Received";
	qDebug() << pSocket->readAll();	
}
