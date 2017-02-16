#include <QWaitCondition>
#include <QTextStream>
#include <QString>
#include <QThread>
#include <QMutex>
#include <QDebug>
#include <QFile>

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
