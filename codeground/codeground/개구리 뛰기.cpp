// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    setbuf(stdout, NULL);
    
    int TC;
    int test_case;
    int K, N;
    int* stone;
    int walk, cnt;
    int pos;
    
    scanf("%d", &TC);	// cin 사용 가능
    for(test_case = 1; test_case <= TC; test_case++) {
        // 이 부분에서 알고리즘 프로그램을 작성하십시오.
        cin >> N;
        stone = new int[N];
        for(int j = 1; j < N + 1; j++)  cin >> stone[j];
        cin >> K;
        walk = 0; cnt = 0; pos = 0;
        
        for(int i = 0; i < N; i++){
            walk = pos + K;
            if(walk >= stone[i]){
                if(walk < stone[i + 1]){
                    cnt++;
                    pos = stone[i];
                }
                if(i == N - 1){
                    cnt++;
                }
            }
            else{
                cnt = -1;
                break;
            }
            
        }
        printf("Case #%d\n", test_case);	// cout 사용 가능
        cout<<cnt<<endl;
        delete []stone;
    }
    return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}
