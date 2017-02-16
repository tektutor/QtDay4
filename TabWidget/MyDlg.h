#include <QDialog>
#include <QHBoxLayout>
#include <QDebug>
#include <QTabWidget>

#include "HBoxDlg.h"
#include "VBoxDlg.h"
#include "GridDlg.h"

class MyDlg : public QDialog {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QTabWidget *pTabWidget;
	
	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	GridDlg *pGridDlg;

public:
	MyDlg();
};
