#include "Thread.h"

QMutex Thread::mutex;
QWaitCondition Thread::waitForData;

Thread::Thread( TypeOfThread threadType ) {
	typeOfThread = threadType;
}

void Thread::readFile() {
	QFile file ( "file.txt" );

	if ( ! file.open ( QIODevice::ReadOnly | QIODevice::Text ) ) {
		qDebug() << "Error reading file";
		return;
	}

	QTextStream infile ( &file );
	QString message, tempCount;
	for (int count=0; count <5; ++count) {
		message = "Message ";
		tempCount.setNum ( count + 1 );
		message.append( tempCount );
		
		while ( !infile.atEnd() )
			qDebug() << infile.readLine() << endl;
	}
	
	file.close();
}

void Thread::writeFile() {
	QFile file ( "file.txt" );

	if ( ! file.open ( QIODevice::WriteOnly | QIODevice::Text ) ) {
		qDebug() << "Error writing to file";
		return;
	}

	QTextStream outfile ( &file );
	QString message, tempCount;
	for (int count=0; count <5; ++count) {
		message = "Message ";
		tempCount.setNum ( count + 1 );
		message.append( tempCount );
		
		outfile << message << endl;
	}
	
	file.close();
}

void Thread::run() {

	switch ( typeOfThread ) {
		case PRODUCER: {
			qDebug() << "Producer thread is ready to write ...";
			writeFile();
			qDebug() << "Producer has notified ...";
			waitForData.wakeOne(); //Notifies the consumer thread
		}
		break;
		case CONSUMER: {
			qDebug() << "Consumer thread is about to start producer thread ...";
#if 1
			Thread producerThread(PRODUCER);
			producerThread.start();
			yieldCurrentThread();
#endif
	
			qDebug() << "Consumer thread waiting for notification ...";
			mutex.lock();
			waitForData.wait( &mutex ); //
			qDebug() << "Consumer received notification ...";
			readFile();
			mutex.unlock();
			exec();
		}
		break;
	}

}
