//
//  main.cpp
//  Ch11
//
//  Created by 이승원 on 2017. 3. 6..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

class Gun{
private:
    int bullet;
public:
    Gun(int bnum) : bullet(bnum) {}
    void Shot(){
        cout<<"BBANG!"<<endl;
        bullet--;
    }
};

class Police{
private:
    int handcuffs;
    Gun* pistol;
public:
    Police(int bnum, int bcuff) : handcuffs(bcuff){
        if(bnum > 0) pistol = new Gun(bnum);
        else pistol = NULL;
    }
    
    void PutHandcuff(){
        cout << "SNAP!"<<endl;
        handcuffs--;
    }
    
    void Shot(){
        if(pistol == NULL) cout<<"Hut BBANG!" << endl;
        else pistol->Shot();
    }
    
    Police& operator=(const Police& ref){
        if(pistol !=NULL) delete pistol;
        if(ref.pistol != NULL) pistol = new Gun(*(ref.pistol));
        handcuffs = ref.handcuffs;
        return *this;
    }
    
    ~Police(){
        if(pistol != NULL){
            delete pistol;
            cout<<"Delete Police!!"<<endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    Police man1(5,3);
    Police man2 = man1;
    man2.PutHandcuff();
    man2.Shot();
    
    Police man3(2,4);
    man3 = man1;
    man3.PutHandcuff();
    man3.Shot();
    return 0;
}




























