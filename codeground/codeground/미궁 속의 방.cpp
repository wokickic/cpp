// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
using namespace std;


int getValue(int x, int y){
    
}

int main(int argc, char** argv) {
    
    
    setbuf(stdout, NULL);
    
    int TC;
    int test_case;
    int N, K;
    char mov;
    int x = 0, y = 0;
    int total = 1;
    
    scanf("%d", &TC);	// cin 사용 가능
    for(test_case = 1; test_case <= TC; test_case++) {
        // 이 부분에서 알고리즘 프로그램을 작성하십시오.
        cin >> N >> K;
        for(int i = 0; i < K; i++){
            cin >> mov;
            switch(mov){
                case 'D' : x++;
                    break;
                case 'U' : x--;
                    break;
                case 'R' : y++;
                    break;
                case 'L' : y--;
                    break;
            }
            total = total + getValue(x,y);
        }
        
        
        
        // 이 부분에서 정답을 출력하십시오.
        printf("Case #%d\n", test_case);	// cout 사용 가능
        cout << total <<endl;
        total = 0;
        
    }    return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}
