#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(framerate);
    ofSetLineWidth(.1F);
    ofDisableAntiAliasing();
    ofSetBackgroundColor(250);
    ofSetColor(10);
    
    for(int i = 0; i < 32; i++){
        for(int j = 0; j < 20; j++){
            Tour t = Tour(_DIMENSION ,
                          _DIMENSION ,
                          i * _SIZE * _DIMENSION,
                          j * _SIZE * _DIMENSION);
            tours.push_back(t);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(Tour &t : tours){
        t.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(Tour t : tours){
        t.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP)
        framerate++;
    if(key == OF_KEY_DOWN)
        framerate--;
    
    ofSetFrameRate(framerate);
    
    if(key == ' '){
        saveImage();
        for(Tour &t : tours){
            t.reset();
        }
    }
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
