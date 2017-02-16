#include <QWaitCondition>
#include <QTextStream>
#include <QString>
#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include <QDebug>
#include <QFile>

#include "CustomMutexLocker.h"

enum TypeOfThread {
	PRODUCER,
	CONSUMER
};

class Thread : public QThread {
Q_OBJECT
private:
	TypeOfThread typeOfThread;
	static QMutex mutex;
	static QWaitCondition waitForData;

	void readFile();
	void writeFile();
public:
	Thread( TypeOfThread );
protected:
	void run();

};
