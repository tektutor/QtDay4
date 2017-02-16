#include "MyDlg.h"

MyDlg::MyDlg() {

	pHBoxDlg = new HBoxDlg;
	pVBoxDlg = new VBoxDlg;
	pGridDlg = new GridDlg;

	pTabWidget = new QTabWidget;

	pTabWidget->addTab( pHBoxDlg, "HBox Layout" );
	pTabWidget->addTab( pVBoxDlg, "VBox Layout" );
	pTabWidget->addTab( pGridDlg, "Grid Layout" );
	
	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pTabWidget );

	setLayout ( pLayout );

}
