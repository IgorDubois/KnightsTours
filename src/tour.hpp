//
//  tour.hpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 04/03/17.
//
//

#pragma once
#include <vector>
#include "knight.hpp"
#include "ofMain.h"
#include "util.hpp"

class Tour{
private:
    Knight k;
    ofVec2f dimension;
    ofVec2f position;
    
public:
    Tour(int = 5, int = 5, int = 0, int = 0);
    void update();
    void draw();
    void reset();
};
