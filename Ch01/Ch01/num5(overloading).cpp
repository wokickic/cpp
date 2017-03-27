//
//  num5(overloading).cpp
//  Ch01
//
//  Created by 이승원 on 2017. 2. 1..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
using namespace std;

void swap (int* num1, int* num2){
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
void swap (char* ch1, char* ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void swap (double* dbl1, double* dbl2){
    double tmp;
    tmp = *dbl1;
    *dbl1 = *dbl2;
    *dbl2 = tmp;
}

int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout<<num1 <<" "<< num2<<"\n";
    
    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1,&ch2);
    cout<<ch1 <<' '<< ch2<< "\n";
    
    double dbl1=1.111, dbl2=5.222;
    swap(&dbl1, &dbl2);
    cout<<dbl1<<" "<<dbl2<<"\n";
    
    return 0;
}
