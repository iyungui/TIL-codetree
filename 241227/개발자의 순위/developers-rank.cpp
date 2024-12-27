#include <iostream>
using namespace std;

#define MAX_K 10
#define MAX_N 20

int k, n;
int arr[MAX_K + 1][MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;

    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= n; j++) cin >> arr[i][j];
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++) {   // 모든 개발자에 대하여 완전탐색
        int counting_arr[MAX_N + 1] = {0};  // 해당 idx (등수) 뒤에 숫자들을 담을 배열 초기화
        int idx;    // 해당 숫자 i가 담긴 배열의 인덱스(등수) 
        for(int j = 1; j <= k; j++) {

            for(int l = 1; l <= n; l++) // i 담긴 인덱스 찾기
                if(arr[j][l] == i) idx = l;

            for(int l = idx + 1; l <= n; l++) { // i 보다 큰 (늦은) 등수에 대하여 count 배열 담기
                counting_arr[arr[j][l]]++;
            }
        }

        for(int j = 1; j <= n; j++) {
            if(counting_arr[j] == k) cnt++; // 만약 모든 경기에 대하여 해당 숫자 있으면, cnt
        }
    }

    cout << cnt;

    return 0;
}