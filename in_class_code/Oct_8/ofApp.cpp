#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    camWidth = 640;
    camHeight = 480;
    
    vidGrabber.setVerbose(true);
    vidGrabber.setDeviceID(0);
    vidGrabber.setDesiredFrameRate(30);
    vidGrabber.initGrabber(camWidth, camHeight);
    
    vidPixels.allocate(camWidth, camHeight, OF_PIXELS_RGB);
    vidTexture.allocate(vidPixels);
}

//--------------------------------------------------------------
void ofApp::update(){
    vidGrabber.update();
    
    ofPixelsRef pixelRef = vidGrabber.getPixels();
    
    for(int i = 0; i < camHeight; i++){
        vidPixels.setColor(column,
                           i,
                           pixelRef.getColor(camWidth/2 ,i));
    }
    
    column = (column + 1) % camWidth;
    vidTexture.loadData(vidPixels);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofColor::white);
    vidGrabber.draw(20, 20, 320, 240);
    //(x, y, w, h)
    vidTexture.draw(360, 20, 320, 240);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
