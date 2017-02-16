#include <QApplication>
#include <QQuickView>

int main (int argc, char **argv ) {

	QApplication theApp (argc, argv);

	QQuickView view;
	view.setSource ( QUrl::fromLocalFile ( "main.qml" ) );
	view.show();
	
	return theApp.exec();

}
