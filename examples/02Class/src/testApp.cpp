#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true); //프레임속도를 60에 고정
	
	
	//처음 취이 지정
	bob.pos.x = 200;
	bob.pos.y = 200;

}

//--------------------------------------------------------------
void testApp::update(){
	bob.update();
	marley.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(100, 200, 0);
	bob.draw();
	
	ofSetColor(200,150,100);
	marley.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}