#include <QDialog>
#include <QHBoxLayout>
#include <QComboBox>
#include <QMessageBox>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QComboBox *pComboBox;
public:
	MyDlg();
private slots:
	void onComboSelected(QString);
};
