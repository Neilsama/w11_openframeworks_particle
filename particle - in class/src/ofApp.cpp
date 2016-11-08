#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(0);
 
    mGravity = ofVec2f(0.f, 0.02f);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < mSystem.size(); i++){
        //apply gravity all particles
        mSystem[i].update(mGravity);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
       ofBackgroundGradient(ofColor(50,50,50), ofColor(0,0,0),OF_GRADIENT_CIRCULAR);
    for (int i = 0; i < mSystem.size(); i++){
        //apply gravity all particles
        mSystem[i].draw();
    }
    ofSetColor(255, 255, 255);
    line.draw();
    
    ofDrawBitmapString("mouse position: x = " + ofToString(mouseX) + "  y = " + ofToString(mouseY), 40, 40);
    ofDrawBitmapString("press 'c' to clear ", 40, 60);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'c'){
        line.clear();
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
    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);
    
    //create a new particle system after click
    ParticleSystem system = ParticleSystem(ofVec2f (x, y));
    mSystem.push_back(system);
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
