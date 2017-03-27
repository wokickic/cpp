//
//  ㅇㅇ.cpp
//  codeground
//
//  Created by 이승원 on 2017. 2. 7..
//  Copyright © 2017년 wokic. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int arr[300002];

int main(void){
    int N;
    int T;
    int* buf;
    int num3 = 123456789;
    char cnum[9];
    int result = 0;
    int result1 = 1 ^ 1 ^ 2;
    int cnt;
    int tmp;
    string  s_buf;
    /* to_string을 이용한 형변환 */
    s_buf = to_string(num3);
    cout <<s_buf<<endl;
    
    /*
    while(1){
        num3 = num3 / 10;
        if(num3 )
    }*/
    
    
    /* for(int i = 0; i<9;i++){
        tmp = num3 % 10;
        cnt = num3/10;
        
        sprintf(cnum+i,"%d",tmp);
    }sprintf를 이용한 int -> char 형변환*/
    
    
    /*
    cout << "T : ";
    cin >> T;
    while(1){
        cout << " N : ";
        cin >> N;
        buf = new int[N];
        
        for(int i = 0; i <N; i++){
            cin >> buf[i];
            result = result ^ buf[i];
        }
        
        cout << result;
        
    }*/
    
 /*   int TC;
    int test_case;
    
    scanf("%d", &TC);	// cin 사용 가능
    for (test_case = 1; test_case <= TC; test_case++) {
        // 이 부분에서 알고리즘 프로그램을 작성하십시오.
        int n;
        cin >> n; // 사람 입력
        for (int i = 0; i<n; i++)
        {
            scanf("%d", &arr[i]);// 데이터 입력
        }
        sort(arr, arr + n); //오름차순 정렬
//        for(int i = 0; i < n; i++) printf("%d ",arr[i]);

        int max = 0;
        for (int i = 0; i <n; i++)
        {
            if (arr[i]+n-i>max)max = arr[i]+n-i;
        }
//        printf("MAX : %d\n",max);
        
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] + n >= max)cnt++;
        }
        // 이 부분에서 정답을 출력하십시오.
        printf("Case #%d\n", test_case);	// cout 사용 가능
        printf("%d\n", cnt);
        
    }*/
}
