#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fft.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    fft.update();
    
    cout << fft.getBins()[40] << endl;
    
    if(fft.getBins()[40] > 0.1 ) {
        for(int i = 0; i < 20; i++){
            Particle p = Particle(ofColor::blue,
                                  ofVec3f(20,20,20), //scale
                                  ofVec3f(0), //vel
                                  ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0), //pos
                                  ofVec3f(ofRandom(-2, 2),
                                          ofRandom(-2, 2),
                                          ofRandom(-2, 2))); //acc
            particlesV.push_back(p);
        }
    }
    
    
    float dt = ofGetLastFrameTime();
    for (int i = 0; i < particlesV.size(); i++) {
        particlesV[i].update(dt);
        
        if (particlesV[i].lifespan > 3.0f) {
            particlesV.erase(particlesV.begin()+i);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < particlesV.size(); i++) {
        particlesV[i].draw();
    }
}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i = 0; i < 20; i++){
        Particle p = Particle(ofColor::blue,
                              ofVec3f(20,20,20), //scale
                              ofVec3f(0), //vel
                              ofVec3f(x,y,0), //pos
                              ofVec3f(ofRandom(-2, 2),
                                      ofRandom(-2, 2),
                                      ofRandom(-2, 2))); //acc
        particlesV.push_back(p);
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
