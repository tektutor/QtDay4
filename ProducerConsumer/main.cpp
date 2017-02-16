#include <QCoreApplication>
#include "Thread.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

#if 1
	Thread consumerThread (CONSUMER);
	consumerThread.start();
#else
	Thread consumerThread (CONSUMER);
	consumerThread.start();
	Thread producerThread (PRODUCER);
	producerThread.start();
#endif
	
	return theApp.exec();

}
