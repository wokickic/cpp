//
//  main.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

struct Point{
    int xpos;
    int ypos;
    
    void MovePos(int x, int y);
    void AddPoint(Point &pos);
    void ShowPosition();
};

void Point::AddPoint(Point &pos){
    xpos = xpos + pos.xpos;
    ypos = ypos + pos.ypos;
}

void Point::MovePos(int x, int y){
    xpos = xpos + x;
    ypos = ypos + y;
}

void Point::ShowPosition(){
    printf("[ %d %d ]\n",xpos,ypos);
}

int main(void){
    Point pos1 = {12,4};
    Point pos2 = {20, 30};
    
    pos1.MovePos(-7,10);
    pos1.ShowPosition();
    
    pos1.AddPoint(pos2);
    pos1.ShowPosition();
    
    return 0;
    
}
