#include <QUdpSocket>
#include <QObject>

class UdpServer : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
	int serverPort, clientPort;
public:
	UdpServer(int,int);
	void start();
private slots:
	void onMessageReceived();
};
