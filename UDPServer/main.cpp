#include <QCoreApplication>
#include "UDPServer.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

	int serverPort = 5000;
	int clientPort = 6000;

	UdpServer server(serverPort, clientPort);

	return theApp.exec();

}
