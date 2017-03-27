//
//  num2.cpp
//  Ch01
//
//  Created by 이승원 on 2017. 2. 1..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(void){
    
    char str[100];
    
    cout << "이름과 전화번호를 입력하세요 ";
    gets(str);
    cout << str <<endl;
    return 0;
}
