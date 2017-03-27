//
//  02_2.cpp
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    const int num = 12;
    const int *ptr = &num;
    const int *(&ref) = ptr;
    
    cout<< num << endl;
    cout << *ptr <<endl;
    cout << *ref <<endl;
    
}
