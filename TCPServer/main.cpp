#include <QCoreApplication>
#include "TcpServer.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );
	
	TcpServer server(8000);
	server.start();

	return theApp.exec();
}
