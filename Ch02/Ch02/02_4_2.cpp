//
//  02_4_2.cpp
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void){
    int* num = new int[5];
    int i;
    srand(time(NULL));
    
    for(i = 0; i < 5; i++){
        num[i] = rand() % 100;
        cout << num[i] << endl;
    }
    
}
