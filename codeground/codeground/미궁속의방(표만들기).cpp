// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>


/*잘못짠 프로그램, 지그재그 대각선으로 출력하기*/


using namespace std;

int main(int argc, char** argv) {
    /* 아래 freopen 함수는 input.txt 를 read only 형식으로 연 후,
     앞으로 표준 입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
     만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면,
     그 아래에서 scanf 함수 또는 cin을 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
     또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
     단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야 합니다. */
    //freopen("input.txt", "r", stdin);
    
    setbuf(stdout, NULL);
    
    int TC;
    int test_case;
    long long arr[20][20] = { 0 };
    int N, K;
    int i = 0;
    int j = 0;
    int num = 1;
    int cnt = 2;
    int k;
    bool down_diagonal = true; //true : 위에서 아래로 채우기, false : 밑에서 아래로 채우기
    bool up_tri = true; //true : 상삼각, false : 하삼각
    
    scanf("%d", &TC);	// cin 사용 가능
    for(test_case = 1; test_case <= TC; test_case++) {
        // 이 부분에서 알고리즘 프로그램을 작성하십시오.
        cin >> N >> K;
        
        arr[i][j] = num++;
        
        while(cnt != 0){
            /*상삼각, 하삼각 구분해서 i,j값 이동*/
            if(up_tri == true){
                if(down_diagonal == true) j++;
                else i++;
                if(cnt == N) up_tri = false; //대각선 다채우면 하삼각 채우기 위해서 false로 변경
            }
            else {
                if(down_diagonal == true) i++;
                else j++;
                if(cnt == N) up_tri = false;
            }
    //////////////////////////////////////////////////
            if(down_diagonal == true){
                k = 0;
                while(1){ // 대각선 아래방향 채우기
                    arr[i][j] = num++;
                    k++;
                    if(k == cnt) break;
                    i++;    j--;
                }
                if(up_tri == true) cnt++;
                if(up_tri == false)  cnt--;
                down_diagonal = false;
            }
            else{
                k = 0;
                while(1){ // 대각선 위방향 채우기
                    arr[i][j] = num++;
                    k++;
                    if(k == cnt) break; //cnt == 5;
                    i--;    j++;
                }
                
                if(up_tri == true) cnt++;
                if(up_tri == false) cnt--;
                down_diagonal = true;
            }
        }
        
        for(int k = 0; k < N ; k++){
            for(int p = 0; p < N; p++){
                cout <<"\t"<<arr[k][p];
            }
            printf("\n");
        }
        
        
        printf("\n\n");
        // 이 부분에서 정답을 출력하십시오.
        printf("Case #%d\n", test_case);	// cout 사용 가능
        
    }
    
   return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}
