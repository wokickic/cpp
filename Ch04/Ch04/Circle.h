//
//  Header.h
//  Ch04
//
//  Created by 이승원 on 2017. 2. 7..
//  Copyright © 2017년 wokic. All rights reserved.
//

#ifndef Circle_h
#define Circle_h
#include <iostream>
#include <cstdio>

class Point{
private:
    int xpos;
    int ypos;

public:
    void Init(int x, int y);
    void ShowPointInfo() const;
};

class Circle{
private:
    Point center;
    int rad;
    
public:
    void Init(int x, int y, int r);
    void ShowCircleInfo() const;
};

class Ring{
private:
    Circle InnerCir;
    Circle OuterCir;
    
public:
    void Init(int inx, int iny, int inr, int outx, int outy, int outr);
    void ShowRingInfo() const;
};
#endif /* Header_h */
