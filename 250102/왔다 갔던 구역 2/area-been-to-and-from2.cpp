#include <iostream>
using namespace std;

#define MAX_R 2000
// #define OFFSET 1000

int n;
int x;  // 이동거리
char a; // 명령어
int num = 1000; // 현재위치
int countings[MAX_R + 1];   // 0부터 2000까지
int answer[MAX_R + 1];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> a;
        
        if(a == 'L') {
            for(int j = num; j <= num + x; j++) {
                countings[j]++;
            }
            // 현재 위치 업데이트
            num += x;

            // 디버깅
            if(num > 2000) cout << "INDEX OUT OF RANGE" << endl;

        } else if(a == 'R') {
            for(int j = num - x; j <= num; j++) {
                countings[j]++;
            }
            num -= x;
            
            // 디버깅
            if(num < 0) cout << "INDEX OUT OF RANGE" << endl;

            // for(int j = num; j >= num - x; j--) {

            // }
        }
    }

    int sum = 0;           // 총 구간의 길이를 저장
    int start = -1;        // 현재 구간의 시작점

    for(int i = 0; i <= MAX_R; i++) {
        if(countings[i] >= 2) {
            if(start == -1) {  // 새로운 구간 시작
                start = i;
            }
        } else {
            if(start != -1) {  // 구간이 끝남
                sum += (i - start) - 1;  // 현재 구간의 길이를 더함
                start = -1;
            }
        }
    }

    // 마지막 구간이 배열 끝까지 이어진 경우 처리
    if(start != -1) {
        sum += (MAX_R - start) - 1;
    }

    cout << sum;  // 총 구간의 길이 출력

    return 0;
}