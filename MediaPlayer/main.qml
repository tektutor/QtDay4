import QtQuick 2.0
import QtMultimedia 5.0

Text {
    text: "Click Me!";
    font.pointSize: 24;
    width: 150; height: 50;

    MediaPlayer {
        id: playMusic
        source: "sax.mp3"
    }
    MouseArea {
        id: playArea
        anchors.fill: parent
        onPressed:  { playMusic.play() }
    }
}
