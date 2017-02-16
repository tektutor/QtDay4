#include "MyDlg.h"

MyDlg::MyDlg() {

	pComboBox = new QComboBox;

	pComboBox->addItem( "Item 1" );
	pComboBox->addItem( "Item 2" );
	pComboBox->addItem( "Item 3" );
	pComboBox->addItem( "Item 4" );
	pComboBox->addItem( "Item 5" );
	
	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pComboBox );

	setLayout ( pLayout );

	connect (
		pComboBox,
		SIGNAL ( currentTextChanged ( QString ) ),
		this,
		SLOT ( onComboSelected ( QString ) )
	);

}

void MyDlg::onComboSelected ( QString caption ) {
	//QMessageBox::information(NULL,"Choice", caption);
	QMessageBox msgBox;
	msgBox.setText ( "You chose " + caption );
	msgBox.exec();
}
