#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N][MAX_N];
int n;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    // 직접 시뮬레이션 하면서, 해당 칸의 인접 칸에 1의 개수 세기
    
    int ans = 0;
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < n; y++) {
            int nx, ny;
            int cnt = 0;    // 인접한 칸 중 숫자 1이 적혀 있는 칸의 수
            // 동서남북 돌면서 nx, ny 구하기
            for(int k = 0; k < 4; k++) {
                nx = x + dx[k];
                ny = y + dy[k];

                if(InRange(nx, ny) && arr[nx][ny] == 1) cnt++;
            }
            if(cnt >= 3) ans++;
        }
    }

    cout << ans;
    return 0;
}