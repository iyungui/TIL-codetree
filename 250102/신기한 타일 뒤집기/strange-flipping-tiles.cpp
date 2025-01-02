#include <iostream>
using namespace std;

#define MAX_K 100000

int arr[MAX_K * 2 + 1];
int n;
int cur = MAX_K;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;  // 이동 거리
        char a; // 이동 방향

        cin >> x >> a;

        if(a == 'L') {
            for(int j = 0; j < x; j++)  // 이동한 거리만큼 반복
                arr[cur - j] = 1;   // 흰색은 1
            cur -= (x - 1); // 마지막 타일 뒤집은 위치. (현재 타일도 카운트됨)
        } else if(a == 'R') {
            for(int j = 0; j < x; j++)
                arr[cur + j] = 2;   // 검은색은 2
            cur += (x - 1);
        }
    }

    int cnt_w = 0, cnt_b = 0;
    for(int i = 0; i <= MAX_K * 2; i++) {
        if(arr[i] == 1) cnt_w++;
        else if(arr[i] == 2) cnt_b++;
    }
    cout << cnt_w << " " << cnt_b;
    return 0;
}