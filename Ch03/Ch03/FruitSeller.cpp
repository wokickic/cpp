//
//  FruitSeller.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include "FruitSaleSim.h"

void FruitSeller:: InitMembers(int money, int num, int price){
    Mymoney = money;
    numOfApples = num;
    APPLE_PRICE = price;
}

int FruitSeller:: SaleApples(int money){
    int num = money/APPLE_PRICE;
    Mymoney += money;
    numOfApples -= num;
    return num;
}
void FruitSeller:: ShowSellerState(){
    printf("과일 판매자의 현황 \n");
    printf("남은 사과 : %d\n",numOfApples);
    printf("판매 수익 : %d\n",Mymoney);
}
