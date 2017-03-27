//
//  main.cpp
//  Ch07
//
//  Created by 이승원 on 2017. 2. 13..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

class Car{ //기본 연료 자동차
private:
    int gasolineGauge;
public:
    Car(int gauge) : gasolineGauge(gauge){}
    Car() : gasolineGauge(30) {}
    int GetGasGauge(){
        return gasolineGauge;
    }
};

class HybridCar : public Car{
private:
    int electricGauge;
public:
    HybridCar(int gasgauge, int elegauge)
    : Car(gasgauge), electricGauge(elegauge) {}
    
    HybridCar() : electricGauge(20) {}
    int GetElecGauge(){
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar{
private:
    int waterGauge;
public:
    HybridWaterCar(int gasgauge, int elegauge, int watergauge)
    : HybridCar(gasgauge, elegauge), waterGauge(watergauge) {}
    
    HybridWaterCar() : waterGauge(10) {}
    void ShowCurrentGauge(){
        cout << "잔여 가솔린 :" << GetGasGauge()<<endl;
        cout << "잔여 전기량 :" << GetElecGauge()<<endl;
        cout << "잔여 워터량 :" << waterGauge<<endl;
    }
};

int main(void){
    HybridWaterCar car1;
    car1.ShowCurrentGauge();
    
    cout << "********************" << endl;
    
    HybridWaterCar car2(100,80,60);
    car2.ShowCurrentGauge();
    
    return 0;
}
