#include "GridDlg.h"

GridDlg::GridDlg() {
	pBttn1 = new QPushButton("Button 1");	
	pBttn3 = new QPushButton("Button 3");	
	pBttn4 = new QPushButton("Button 4");	
	pBttn5 = new QPushButton("Button 5");	
	pBttn6 = new QPushButton("Button 6");	

	pBttn1->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );
	pBttn3->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding);

	pBttn4->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding );
	pBttn5->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding);
	pBttn6->setSizePolicy ( QSizePolicy::Expanding, QSizePolicy::Expanding);

	pLayout = new QGridLayout;

	pLayout->addWidget ( pBttn1, 0, 0, 1, 2 );
	pLayout->addWidget ( pBttn3, 0, 2 );

	pLayout->addWidget ( pBttn4, 1, 0 );
	pLayout->addWidget ( pBttn5, 1, 1 );
	pLayout->addWidget ( pBttn6, 1, 2 );

	setLayout ( pLayout );
}















