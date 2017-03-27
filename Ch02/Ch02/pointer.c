//
//  pr.c
//  Ch02
//
//  Created by 이승원 on 2017. 2. 2..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
int main(void){
    int i;
    int data[][2] = {{10,20},{30,40},{50,60},{70,80},{90,100}};
    int (*ptr)[2];
    
    ptr = data;
    /*for(i = 0; i< 5; i++){
        printf("%d\n",*(*ptr+1));
        ptr++;
    }*/
    printf("%d\n",*(*(ptr+3)+3));
    //*(ptr+i) 몇번째 열인지 그뒤에 +j는 열의 처음부터 몇번째 떨어저 있는지
}
