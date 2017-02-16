#include <QCoreApplication>
#include "TcpClient.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );
	
	TcpClient client;
	client.connectToServer();

	return theApp.exec();
}
