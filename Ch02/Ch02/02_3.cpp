//
//  02_3.cpp
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.

//  두점의 합을 계산하는 프로그램

#include <iostream>
using namespace std;

typedef struct __Point{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point *pptr = new Point;
    pptr->xpos = p1.xpos + p2.xpos;
    pptr->ypos = p1.ypos + p2.ypos;
    return *pptr;
} // heap영역에 생성되는 변수라 delete 해줄때까지 소멸 하지 않는다.


int main(void){
    Point *pptr1 = new Point;
    pptr1->xpos = 3;
    pptr1->ypos = 30;
    
    Point *pptr2 = new Point;
    pptr2->xpos = 70;
    pptr2->ypos = 7;
    
    Point &pref = PntAdder(*pptr1, *pptr2);
    cout << pref.xpos <<" "<<pref.ypos <<endl;
    
    delete pptr1;
    delete pptr2;
    delete &pref;
}
