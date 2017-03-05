//
//  tour.cpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 04/03/17.
//
//

#include "tour.hpp"

Tour::Tour(int x, int y, int posX, int posY){
    dimension.x = x;
    dimension.y = y;
    position.x = posX;
    position.y = posY;
}

void Tour::update(){
    k.move();
//    if(k.isStuck())
//        saveImage(position, dimension);
}

void Tour::draw(){
    //ofSetColor(250 ,(int)position.x % 256 ,(int)position.y % 256 ,200);
    //ofDrawRectangle(position, dimension.x * _SIZE, dimension.y * _SIZE);
    
    ofPolyline line;
    int i = 0;
    int increment = 255 / (dimension.x * dimension.y);
    for(ofVec2f v : k.getVisited()){
        i += increment;
        //line.curveTo(position + (v * _SIZE + ofVec2f(_SIZE / 2,_SIZE / 2)));
        line.lineTo(position + (v * _SIZE + ofVec2f(_SIZE / 2,_SIZE / 2)));
    }
    //k.draw(position);
    ofSetColor(i);
    //ofDrawRectangle(position, dimension.x * _SIZE, dimension.y * _SIZE);
    ofSetColor(10);
    line.draw();
}

void Tour::reset(){
    k.reset();
}
