//
//  FruitSaleSim.h
//  Ch03
//
//  Created by 이승원 on 2017. 2. 3..
//  Copyright © 2017년 wokic. All rights reserved.
//

#ifndef FruitSaleSim_h
#define FruitSaleSim_h
#include <iostream>
#include <cstdio>
using namespace std;

class FruitSeller{
    int Mymoney;
    int numOfApples;
    int APPLE_PRICE;
    
public:
    void InitMembers(int money, int num, int price);
    int SaleApples(int money);
    void ShowSellerState() const;
};

class FruitBuyer {
    int myMoney;
    int numOfApples;
public:
    void InitMembers(int money, int num);
    void buyApples(FruitSeller &seller, int money);
    void ShowBuyerState() const;
};
#endif /* FruitSaleSim_h */
