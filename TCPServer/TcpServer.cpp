#include "TcpServer.h"

TcpServer::TcpServer(int port) {
	pServerSocket = new QTcpServer;
	this->port = port;

	connect (
		pServerSocket,
		SIGNAL ( newConnection() ),
		this,
		SLOT ( onNewConnection() )
	);
}

void TcpServer::start() {
	qDebug() << "Server listening @ port => " << port;
	pServerSocket->listen(
		QHostAddress::LocalHost,
		port	
	);
}

void TcpServer::onNewConnection() {
	qDebug() << "Received new connection request from a client ...";
	QTcpSocket *pClientSocket = pServerSocket->nextPendingConnection();	
	pClientSocket->write ( "Hi from Server ..." );
	pClientSocket->close();
}
