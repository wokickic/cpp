//
//  num4.cpp
//  Ch01
//
//  Created by 이승원 on 2017. 2. 1..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int mon = 0;
    int base = 50;
    
    while(1){
        cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
        cin >> mon;
        if(mon == -1) break;
        cout << "이번달 급여 : " << base + (mon * 0.12) << "만원\n";
    }
    cout << "프로그램을 종료합니다.\n";
}
