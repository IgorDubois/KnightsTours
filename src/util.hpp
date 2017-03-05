//
//  util.hpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 07/02/17.
//
//

#pragma once
#include <ctime>
#include <sstream>
#include <ofMain.h>

#define _SIZE 4
#define _DIMENSION 10

std::string dateString();
void saveImage(ofVec2f origin, ofVec2f size);
void saveImage();
void drawChecker();
