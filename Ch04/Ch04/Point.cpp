//
//  Point.cpp
//  Ch04
//
//  Created by 이승원 on 2017. 2. 6..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include "Circle.h"

void Point::Init(int x, int y){
    xpos = x;
    ypos = y;
}

void Point:: ShowPointInfo() const{
    printf("[ %d , %d ]\n\n",xpos,ypos);
}

void Circle::Init(int x, int y, int r){
    rad = r;
    center.Init(x, y);
}

void Circle::ShowCircleInfo() const{
    printf("radius : %d\n", rad);
    center.ShowPointInfo();
}

void Ring::Init(int inx, int iny, int inr, int outx, int outy, int outr){
    InnerCir.Init(inx, iny, inr);
    OuterCir.Init(outx, outy, outr);
}

void Ring::ShowRingInfo() const{
    printf("Inner Circle Info...\n");
    InnerCir.ShowCircleInfo();
    printf("Outter Circle Info...\n");
    OuterCir.ShowCircleInfo();
}

