//
//  10_02.cpp
//  Ch10
//
//  Created by 이승원 on 2017. 3. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Point{
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition() const{  cout <<"["<<xpos<<", "<<ypos<<"]"<<endl;    }
    Point& operator++(){
        xpos += 1;
        ypos += 1;
        return *this;
    }
    
    Point& operator-=(Point& num){
        xpos -= num.xpos;
        ypos -= num.ypos;
        return *this;
    }
    friend Point& operator--(Point& ref);
    friend Point& operator~(Point& ref);
};

Point& operator--(Point& ref){
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

Point& operator~(Point& ref){
    Point pos(ref.ypos, ref.xpos);
    return pos;
}

int main(void){
    Point pos1(30,20);
    Point pos2(10,10);
    
    pos1.ShowPosition();
    pos1 -= pos2;
    pos1.ShowPosition();
    
    
    (~pos1).ShowPosition();
    return 0;
}
