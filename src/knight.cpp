//
//  knight.cpp
//  KnightsTour
//
//  Created by Hippolyte Dubois on 07/02/17.
//
//
#include <iostream>
#include "knight.hpp"


Knight::Knight(){
    this->currentPos = ofVec2f(rand() % _DIMENSION, rand() % _DIMENSION);
    visited.push_back(ofVec2f(currentPos));
}

Knight::Knight(int x, int y){
    this->currentPos = ofVec2f(x,y);
    visited.push_back(ofVec2f(currentPos));
}

Knight::Knight(ofVec2f pos){
    this->currentPos = pos;
    visited.push_back(ofVec2f(currentPos));
}

bool Knight::move(){
    if(!stuck){
        ofVec2f mv1;
        std::vector<ofVec2f> moves = possibleMove;
        do{
            if(!moves.empty()){
                int index = rand() % moves.size();
                mv1 = ofVec2f(moves.at(index));
                moves.erase(moves.begin() + index);
            } else {
                stuck = true;
                break;
            }
        } while ((std::find(visited.begin(), visited.end(), (currentPos + mv1)) != visited.end()) ||
                 ((currentPos + mv1).x < 0) ||
                 ((currentPos + mv1).y < 0) ||
                 ((currentPos + mv1).x >= _DIMENSION) ||
                 ((currentPos + mv1).y >= _DIMENSION));
        //visited.push_back(ofVec2f(currentPos));
        
        if(stuck){
            std::cout << "Stuck." << std::endl;
            for(ofVec2f v : visited){
                std::cout << "x:" << v.x << " ; y:" << v.y << std::endl;
            }
        } else {
            currentPos += mv1;
            visited.push_back(ofVec2f(currentPos));
        }
    }

}

void Knight::draw(ofVec2f origin){
    ofSetColor(250,10,240);
    ofDrawCircle(origin + currentPos * _SIZE + ofVec2f(_SIZE / 2,_SIZE / 2), (_SIZE * 0.9F) / 2);
}

ofVec2f Knight::getPos(){
    return currentPos;
}

std::vector<ofVec2f> Knight::getVisited(){
    return visited;
}

void Knight::reset(){
    this->currentPos = ofVec2f(rand() % _DIMENSION, rand() % _DIMENSION);
    stuck = false;
    timeStuck = 0;
    visited.clear();
    visited.push_back(ofVec2f(currentPos));
}

bool Knight::isStuck(){
    return stuck;
}
