//
//  util.cpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 07/02/17.
//
//

#include "util.hpp"

std::string dateString(){
    std::stringstream s ;
    // current date/time based on current system
    time_t now = time(0);
    
    tm *ltm = localtime(&now);
    
    s << ltm->tm_mon << "_" << ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec;
    
    return s.str();
}

void saveImage(ofVec2f origin, ofVec2f size){
    ofImage img;
    img.grabScreen(origin.x, origin.y, origin.x + size.x * _SIZE, origin.y + size.y * _SIZE);
    img.save("knights_tour_" + dateString() + ".png");
}

void saveImage(){
    ofImage img;
    img.grabScreen(0,0,1280,800);
    img.save("knights_tour_" + dateString() + ".png");
}

void drawChecker(){
    for(int i = 0; i < _DIMENSION ; i++){
        for(int j = 0; j < _DIMENSION; j++){
            if((i + j) % 2 == 0)
                ofSetColor(10);
            else
                ofSetColor(250);
            ofDrawRectangle(i * _SIZE, j * _SIZE, _SIZE, _SIZE);
        }
    }
}
