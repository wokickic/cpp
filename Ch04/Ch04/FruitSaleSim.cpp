//
//  FruitSaleSim1.cpp
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//
#include "FruitSaleSim.h"
int main(void){
    int money;
    FruitSeller seller;
    FruitBuyer buyer;
    
    seller.InitMembers(0,20,1000);
    buyer.InitMembers(5000,0);
    
    cout << "지불 금액 : ";
    cin >> money;
    
    //seller.SaleApples(money);
    buyer.buyApples(seller, money);
    
    seller.ShowSellerState();
    buyer.ShowBuyerState();
}
