//
//  시험공부.cpp
//  codeground
//
//  Created by 이승원 on 2017. 2. 12..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void){
    setbuf(stdout, NULL);
    
    int TC;
    int test_case;
    int K, N;
    int total = 0;
    int* score;
    
    cin >> TC;
    for(test_case = 1; test_case <= TC; test_case++) {
        // 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
        cin >> N;
        cin >> K;
        score = new int[N];
        for(int i = 0; i < N; i++) cin >> score[i];
        
        sort(score,score + N);
        
        for(int i = N - 1; K != 0; i--,K--){
            total = total + score[i];
        }
        
        
        // 이 부분에서 정답을 출력하십시오.
        printf("Case #%d\n", test_case);
        cout << total <<endl;
        
        delete []score;
        total = 0;
    }
    return 0;
}
