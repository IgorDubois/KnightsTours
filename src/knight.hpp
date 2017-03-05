//
//  knight.hpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 07/02/17.
//
//

#pragma once

#include <vector>
#include "ofMain.h"
#include "util.hpp"

class Knight{
public:
    Knight();
    Knight(int x, int y);
    Knight(ofVec2f pos);
    bool move();
    void draw(ofVec2f origin);
    ofVec2f getPos();
    std::vector<ofVec2f> getVisited();
    void reset();
    bool isStuck();
private:
    ofVec2f currentPos;
    std::vector<ofVec2f> visited;
    bool stuck = false;
    int timeStuck = 0;
    std::vector<ofVec2f> possibleMove = {
        ofVec2f(3, 2),
        ofVec2f(3, -2),
        ofVec2f(-3, 2),
        ofVec2f(-3, -2),
        ofVec2f(2, 3),
        ofVec2f(-2, 3),
        ofVec2f(-2, -3),
        ofVec2f(2, -3),
    };
};

//{
//    ofVec2f(2, 1),
//    ofVec2f(2, -1),
//    ofVec2f(-2, 1),
//    ofVec2f(-2, -1),
//    ofVec2f(1, 2),
//    ofVec2f(-1, 2),
//    ofVec2f(-1, -2),
//    ofVec2f(1, -2),
//};
