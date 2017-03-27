//
//  main.cpp
//  Ch01
//
//  Created by 이승원 on 2017. 2. 1..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void) {
    int num;
    int sum = 0;
    
    for(int i = 1; i < 6; i++){
        cout << i <<"번째 정수 입력 : ";
        cin >> num;
        sum = sum+ num;
    }
    cout << "합계 : " << sum <<"\n";
    return 0;
}
