#include <QCoreApplication>
#include "UDPClient.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

	int currentMachinePort = 6000;
	int otherMachinePort = 5000;

	UdpClient client(currentMachinePort, otherMachinePort);

	return theApp.exec();

}
