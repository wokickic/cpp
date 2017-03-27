//
//  02_1_2.cpp
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

void SwapPointer_ref(int *(&ptr1), int *(&ptr2)){
    int *ptr = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr;
}

void SwapPointer(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void){
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;
    
    cout << *ptr1 <<endl;
    cout << *ptr2 <<endl;
    
    
    SwapPointer(ptr1, ptr2);
    
    printf("변경후 : %d %d\n",*ptr1,*ptr2);
    
    
}
