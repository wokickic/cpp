//
//  NameCard.cpp
//  Ch04
//
//  Created by 이승원 on 2017. 2. 7..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

namespace COMP_POS {
    enum {CLERK, SENIOR, ASSIST, MANAGER};
    
    void ShowPositionInfo(int pos){
        switch(pos){
            case CLERK:
                printf("사원\n");
                break;
            case SENIOR:
                printf("주임\n");
                break;
            case ASSIST:
                printf("대리\n");
                break;
            case MANAGER:
                printf("과장\n");
                break;
        }
    }
}

class NameCard{
private:
    char* name;
    char* company;
    char* call;
    int rank;

public:
    NameCard(char* nam, char* comp, char* phone, int position){
        name = new  char[strlen(nam) + 1];
        company = new char[strlen(comp) + 1];
        call = new char[strlen(phone) + 1];
        rank = position;
        
        strcpy(name, nam);
        strcpy(company, comp);
        strcpy(call, phone);
    }
    
    void ShowPersonInfo(){
        cout << "이  름 : " << name <<endl;
        cout << "회  사 : " << company <<endl;
        cout << "전  화 : " << call<<endl;
        cout << "직  급 : "; COMP_POS::ShowPositionInfo(rank);
        cout << "***********************\n";
    }
    
    ~NameCard(){
        delete []name;
        delete []company;
        delete []call;
        cout << "fin\n";
    }
};


int main(void){
    NameCard manClerk("LEE", "ABCEng", "010-3030-123", COMP_POS::CLERK);
    NameCard manSENIOR("HONG", "OrangeEng", "010-23424-123", COMP_POS::SENIOR);
    manClerk.ShowPersonInfo();
    manSENIOR.ShowPersonInfo();
}
















