#include "UDPClient.h"

UdpClient::UdpClient(int currentMachinePort, int otherMachinePort) {

	this->currentMachinePort = currentMachinePort;
	this->otherMachinePort = otherMachinePort;
	pSocket = new QUdpSocket;

	pSocket->bind ( QHostAddress::LocalHost, currentMachinePort );

	connect (
		pSocket,
		SIGNAL ( readyRead() ),
		this,
		SLOT ( onMessageReceived() )
	);	
}

void UdpClient::onMessageReceived() {
	qDebug() << "Message Received";
	
	int dataSize = 0;
	char *msg = NULL;
	while ( pSocket->hasPendingDatagrams() )  {
		dataSize = pSocket->pendingDatagramSize();	
		msg = new char[ dataSize ];	
		pSocket->readDatagram(msg,dataSize );	
		qDebug() << QString(msg);	
	}
}
