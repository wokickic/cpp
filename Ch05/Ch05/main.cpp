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
    NameCard(char* name, char* company, char* call, int rank){
        this->name = new  char[strlen(name) + 1];
        this->company = new char[strlen(company) + 1];
        this->call = new char[strlen(call) + 1];
        this->rank = rank;
        
        strcpy(this->name, name);
        strcpy(this->company, company);
        strcpy(this->call, call);
    }
    
    NameCard(const NameCard& copy){ //복사 생성자
        name = new char[strlen(copy.name) + 1];
        company = new char[strlen(copy.company)+1];
        call = new char[strlen(copy.call)+1];
        rank = copy.rank;
        
        strcpy(name, copy.name);
        strcpy(company, copy.company);
        strcpy(call, copy.call);
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
/* class를 생성하여 const static으로 상수 정의*/
class countryArea{
public:
    const static int RUSSIA = 1707540;
    const static int CANADA = 998467l;
};

/////////////////////////////////////////////////
int main(void){
    NameCard manClerk("LEE", "ABCEng", "010-3030-12", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("HONG", "OrangeEng", "010-23424-123", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowPersonInfo();
    copy2.ShowPersonInfo();
}
















