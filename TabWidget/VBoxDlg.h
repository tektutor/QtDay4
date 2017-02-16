#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

class VBoxDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QVBoxLayout *pLayout;
public:
	VBoxDlg();

};
