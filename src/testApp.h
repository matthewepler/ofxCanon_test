#pragma once

#include "ofMain.h"
#include "Canon.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed  (int key);

        roxlu::Canon canon;
    
        void onPictureTaken(roxlu::CanonPictureEvent& ev);
};

