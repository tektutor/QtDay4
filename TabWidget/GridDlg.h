#include <QDialog>
#include <QPushButton>
#include <QGridLayout>

class GridDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn3;
	QPushButton *pBttn4, *pBttn5, *pBttn6;
	QGridLayout *pLayout;
public:
	GridDlg();
};
