//
//  07_02_02.cpp
//  Ch07
//
//  Created by 이승원 on 2017. 2. 23..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

class Book{
private:
    char* title;
    char* isbn;
    int price;
    
public:
    Book(char* tit, char* isb, int pr) : price(pr){
        title = new char[strlen(tit) + 1];
        strcpy(title, tit);
        
        isbn = new char[strlen(isb) + 1];
        strcpy(isbn, isb);
    }
    
    Book& operator=(const Book& ref){
        delete []title;
        delete []isbn;
        
        title = new char[strlen(ref.title) + 1];
        strcpy(title, ref.title);
        
        isbn = new char[strlen(ref.isbn)];
        strcpy(isbn, ref.isbn);
        
        price = ref.price;
        
        return *this;
    }
    
    void ShowBookInfo(){
        cout << " 제목  : " << title << endl;
        cout << " ISBN : " << isbn << endl;
        cout << " 가격  : " << price <<endl;
    }
    
    ~Book(){
        delete []title;
        delete []isbn;
    }
};

class EBook : public Book {
private:
    char* DRMKey;
    
public:
    EBook(char* tit, char* isb, int pr, char* dr) : Book(tit,isb,pr){
        DRMKey = new char[strlen(dr) + 1];
        strcpy(DRMKey, dr);
    }
    
    EBook& operator=(const EBook& ref){
        Book::operator=(ref);
        
        delete []DRMKey;
        
        DRMKey = new char[strlen(ref.DRMKey) + 1];
        strcpy(DRMKey, ref.DRMKey);
        return *this;
    }
    
    void ShowEbookInfo(){
        ShowBookInfo();
        cout << " 인증키 : " << DRMKey << endl;
    }
    
    ~ EBook(){
        delete []DRMKey;
    }
};

int main(void){
    EBook ebook1("좋은 C++ ebook","555-12345-890-1",10000,"fdx9w0i8kiw");
    ebook1.ShowEbookInfo();
    
    EBook ebook2 = ebook1;
    ebook2.ShowEbookInfo();
    return 0;
}


























