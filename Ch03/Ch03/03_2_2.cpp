//
//  03_2_2.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Printer{
private:
    string str;
public:
    void SetString(string buf);
    void ShowString();
};

void Printer::SetString(string buf){
    str = buf;
}

void Printer::ShowString(){
    cout << str << endl;
}

int main(void){
    Printer pnt;
    char* str;
    cout << "Input String : ";
    gets(str);
    pnt.SetString(str);
    pnt.ShowString();
    
    pnt.SetString("I love C++");
    pnt.ShowString();
}
