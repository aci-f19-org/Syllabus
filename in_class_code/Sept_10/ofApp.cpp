#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //color only outline
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(0);
    ofSetFrameRate(1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int size = 30;
    
    //offset
    ofTranslate(size, size);
    
    //make a grid
    for(int w = 0; w < 12; w++) {
        for(int h = 0; h < 23; h++) {
            ofPushMatrix();
            //increasing gradient of randomness
            //random move
            ofTranslate(size*w + ofRandom(-h, h),
                        size*h + ofRandom(-h, h));
            //random tilt - right side
            ofRotateDeg(ofRandom(-5*h, 5*h));
            //draw a square, upper left, upper right, width, height
            ofDrawRectangle(0, 0, size, size);
            ofPopMatrix();
        }
    }
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
