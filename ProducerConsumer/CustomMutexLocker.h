#include <QMutex>
#include <QObject>
#include <QDebug>

class CustomMutexLocker : public QObject {
Q_OBJECT
private:
	QMutex *pMutex;
public:
	CustomMutexLocker ( QMutex *pMutex ) {
		this->pMutex = pMutex;
		this->pMutex->lock();
		qDebug() << "Mutex is locked ..." << endl;
	}
	~CustomMutexLocker() {
		pMutex->unlock();
		qDebug() << "Mutex is unlocked ..." << endl;
	}
};
