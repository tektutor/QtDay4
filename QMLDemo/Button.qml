import QtQuick 2.0

Rectangle {
	width: 100; height:50
	
	border.width: 2
	radius: 20 
	
	gradient: Gradient {
		GradientStop { position: 0.0; color: "white" }
		GradientStop { position: 0.5; color: "grey" }
		GradientStop { position: 1.0; color: "black" }
	}

	MouseArea {
		anchors.fill: parent

		onPressed:
			console.log ( "Button clicked" )

	}
}
