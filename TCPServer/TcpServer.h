#include <QObject>
#include <QTcpServer>
#include <QDebug>
#include <QTcpSocket> 

class TcpServer : public QObject {
Q_OBJECT
private:
	QTcpServer *pServerSocket;
	int port;
public:
	TcpServer(int port);
	void start();
private slots:
	void onNewConnection();
};
