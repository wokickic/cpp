//
//  main.cpp
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
using namespace std;

void Adder(int &num){
    num++;
}

void revSign(int &num){
    num =  0 - num;
}

int main(void) {
    int num1;
    cout << "숫자를 입력하세요 : ";
    cin >> num1;
    
    Adder(num1);
    cout << "증가된 값 : " << num1 <<"\n";
    
    revSign(num1);
    cout<< "부호 변경된 값 : " << num1 << "\n";
    
    return 0;
}
