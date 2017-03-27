//
//  03_2.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

class Calculator{
private:
    int numOfAdd;
    int numOfSub;
    int numOfMul;
    int numOfDiv;
public:
    void Init();
    double Add(double dx, double dy);
    double Sub(double dx, double dy);
    double Mul(double dx, double dy);
    double Div(double dx, double dy);
    void ShowOpCount();
};

void Calculator::Init(){
    numOfAdd = 0;
    numOfSub = 0;
    numOfMul = 0;
    numOfDiv = 0;
}

double Calculator::Add(double dx, double dy){
    numOfAdd++;
    return dx + dy;
}

double Calculator::Sub(double dx, double dy){
    numOfSub++;
    return dx - dy;
}

double Calculator::Mul(double dx, double dy){
    numOfMul++;
    return dx * dy;
}

double Calculator::Div(double dx, double dy){
    numOfDiv++;
    return dx / dy;
}

void Calculator::ShowOpCount(){
    printf("덧셈 : %d  뺄셈 : %d  곱셈 : %d  나눗셈 : %d\n",numOfAdd,numOfSub,numOfMul,numOfDiv);
}

int main(void){
    Calculator cal;
    cal.Init();
    
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Sub(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    
    cal.ShowOpCount();
}










