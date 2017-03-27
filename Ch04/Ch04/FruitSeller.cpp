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
    if(money < 0){
        printf("*** 잘못된 정보가 전달되어 판매를 취소합니다. *** \n");
        return 0;
    }
    
    int num = money/APPLE_PRICE;
    Mymoney += money;
    numOfApples -= num;
    return num;
}
void FruitSeller:: ShowSellerState() const {
    printf("과일 판매자의 현황 \n");
    printf("남은 사과 : %d\n",numOfApples);
    printf("판매 수익 : %d\n",Mymoney);
}
