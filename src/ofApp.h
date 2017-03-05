#pragma once

#include "ofMain.h"
#include "knight.hpp"
#include "util.hpp"
#include <vector>
#include "tour.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
private:
    int framerate = 20;
    
    std::vector<std::vector<ofVec2f>> rules = {{
        ofVec2f(1, 1),
        ofVec2f(1, -1),
        ofVec2f(-1, 1),
        ofVec2f(-1, -1),
        ofVec2f(1, 1),
        ofVec2f(-1, 1),
        ofVec2f(-1, -1),
        ofVec2f(1, -1),
    },
    {
        ofVec2f(2, 1),
        ofVec2f(2, -1),
        ofVec2f(-2, 1),
        ofVec2f(-2, -1),
        ofVec2f(1, 2),
        ofVec2f(-1, 2),
        ofVec2f(-1, -2),
        ofVec2f(1, -2),
    },
    {
        ofVec2f(3, 1),
        ofVec2f(3, -1),
        ofVec2f(-3, 1),
        ofVec2f(-3, -1),
        ofVec2f(1, 3),
        ofVec2f(-1, 3),
        ofVec2f(-1, -3),
        ofVec2f(1, -3),
    }};
    int currentRule = 0;
    std::vector<Tour> tours;
};
