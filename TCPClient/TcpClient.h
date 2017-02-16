#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QHostAddress>

class TcpClient : public QObject {
Q_OBJECT
private:
	QTcpSocket *pClientSocket;
public:
	TcpClient();
	void connectToServer(); 
private slots:
	void onMessageReceived();
	void onConnected();
	void onDisconnected();
	void onHostFound();
	void onError();
};
