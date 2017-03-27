//
//  FruitBuyer.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//
#include "FruitSaleSim.h"

void FruitBuyer:: InitMembers(int money, int num) {
    myMoney = money;
    numOfApples = num;
}
void FruitBuyer:: buyApples(FruitSeller &seller, int money){
    if (money < 0) {
        printf("*** 잘못된 정보가 전달되어 판매를 취소합니다. *** \n\n");
        return;
    }
    myMoney -= money;
    numOfApples += seller.SaleApples(money);
}
void FruitBuyer:: ShowBuyerState() const {
    printf("과일 구매자의 현황\n");
    printf("현재 잔액 : %d\n",myMoney);
    printf("사과 개수 : %d\n",numOfApples);
}
