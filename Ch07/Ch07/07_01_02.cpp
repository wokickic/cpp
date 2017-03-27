//
//  07_01_02.cpp
//  Ch07
//
//  Created by 이승원 on 2017. 2. 13..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo{
private:
    char* name;
    int age;
    
public:
    MyFriendInfo(char* myname, int myage) : age(myage){
        name = new char(strlen(myname) + 1);
        strcpy(name, myname);
    }
    
    ~MyFriendInfo(){
        delete []name;
    }
    
    void ShowMyFirendInfo(){
        cout <<"이 름 : " << name <<endl;
        cout <<"나 이 : " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo{
private:
    char* addr;
    char* phone;

public:
    MyFriendDetailInfo(char* myname, int myage, char* myaddr, char* myphone)
    : MyFriendInfo(myname, myage){
        addr = new char(strlen(myaddr) + 1);
        phone = new char(strlen(myphone) + 1);
        
        strcpy(addr, myaddr);
        strcpy(phone, myphone);
    }
    
    ~MyFriendDetailInfo(){
        delete []addr;
        delete []phone;
    }
    
    void ShowMyFriendDetailInfo(){
        ShowMyFirendInfo();
        cout<<"주 소 : " << addr <<endl;
        cout<<"전 화 : " << phone<<endl<<endl;
    }
    
};
int main(void){
    MyFriendDetailInfo fr("Lee",27,"seoul","010123456");
    fr.ShowMyFriendDetailInfo();
    return 0;
}
