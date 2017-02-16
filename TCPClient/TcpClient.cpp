#include "TcpClient.h"

TcpClient::TcpClient() {
	pClientSocket = new QTcpSocket;
	pClientSocket->bind( QHostAddress::Any );

	connect (
		pClientSocket,
		SIGNAL ( connected() ),
		this,
		SLOT ( onConnected() )
	);

	connect (
		pClientSocket,
		SIGNAL ( disconnected() ),
		this,
		SLOT ( onDisconnected() )
	);

	connect (
		pClientSocket,
		SIGNAL ( error(QAbstractSocket::SocketError) ),
		this,
		SLOT ( onError(QAbstractSocket::SocketError) )
	);
	
	connect (
		pClientSocket,
		SIGNAL ( hostFound() ),
		this,
		SLOT ( onHostFound() )
	);
	connect (
		pClientSocket,
		SIGNAL ( readyRead() ),
		this,
		SLOT ( onMessageReceived() )
	);
}

void TcpClient::connectToServer() {
	pClientSocket->connectToHost( QHostAddress::LocalHost, 8000 );
}

void TcpClient::onError() {
	qDebug() << "Error connecting to Server  ...";
}

void TcpClient::onConnected() {
	qDebug() << "Cool ! => Connected with Server ...";
}

void TcpClient::onDisconnected() {
	qDebug() << "Disconnected from Server ...";
}

void TcpClient::onHostFound() {
	qDebug() << "Was able to hand-shake with Server ...";
}

void TcpClient::onMessageReceived() {
	qDebug() << "Received message from Server ...";
	qDebug() << pClientSocket->readLine();
}
