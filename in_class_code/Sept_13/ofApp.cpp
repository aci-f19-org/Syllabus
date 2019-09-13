#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    point.reset();
    point.setPosition(ofPoint(ofGetWidth()/2,
                              ofGetHeight()/2));
    
    gui.setup();
    gui.setPosition(ofPoint(100,100));
    gui.add(color.setup("Circle Color",
                        ofColor::salmon,
                        ofColor(0),
                        ofColor(255)));
}
//--------------------------------------------------------------
void ofApp::update(){
    double dt = ofGetLastFrameTime();
    point.update(dt);
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(color);
    ofDrawCircle(point.getCurrentPosition(), 100);
    gui.draw();
}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    point.animateTo(ofPoint(x, y));
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
