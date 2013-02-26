#include "testApp.h"
#include "Canon.h"

using namespace roxlu;


//--------------------------------------------------------------
void testApp::setup(){
    canon.start();
    canon.addPictureTakenListener( this, &testApp::onPictureTaken );
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    canon.takePicture();
}

//--------------------------------------------------------------
void testApp::onPictureTaken( roxlu::CanonPictureEvent& ev )
{
    cout << ev.getFilePath() << endl;
}