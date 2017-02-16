#include <QUdpSocket>
#include <QObject>

class UdpClient : public QObject {
Q_OBJECT
private:
	QUdpSocket *pSocket;
	int currentMachinePort, otherMachinePort;
public:
	UdpClient(int,int);
private slots:
	void onMessageReceived();
};
