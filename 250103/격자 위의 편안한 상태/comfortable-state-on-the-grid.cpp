#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N + 1][MAX_N + 1];  // 1 based Indexing
int n, m;
int x, y;
int nx, ny;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> x >> y;

        arr[x][y] = 1;  // 색칠

        int cnt = 0;
        // 확인
        for(int j = 0; j < 4; j++) {
            nx = x + dx[j];
            ny = y + dy[j];

            if(InRange(nx, ny) && arr[nx][ny] == 1) {
                cnt++;
            }
        }
        
        if(cnt == 3) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}