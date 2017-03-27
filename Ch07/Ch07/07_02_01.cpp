//
//  07_02_01.cpp
//  Ch07
//
//  Created by 이승원 on 2017. 2. 23..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


class Rectangle
{
private:
    int row, col;
    
public:
    Rectangle(int x, int y) : row(x), col(y) {}
    void ShowArea() {    cout << row * col <<endl; }
};

class Square : public Rectangle
{
private:
    //int edge;

public:
    Square(int ed): Rectangle(ed, ed) {} //, edge(ed){}
};

int main(void){
    Rectangle rec(4,3);
    rec.ShowArea();
    
    Square sqr(7);
    sqr.ShowArea();
    return 0;
}
