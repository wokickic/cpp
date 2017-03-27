//
//  num3.cpp
//  Ch01
//
//  Created by 이승원 on 2017. 2. 1..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int dan;
    
    cout << " 출력하고자 하는 단을 입력하세요 : ";
    cin >> dan;
    cout << "*** "<<dan<< " ***" << "\n";
    
    for(int i = 1; i < 10 ; i++){
        cout << dan << " * " << i << " = " << dan * i <<"\n";
    }
}
