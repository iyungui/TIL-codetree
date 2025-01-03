#include <iostream>
using namespace std;

#define MAX_NM 100

int n, m;
int arr[MAX_NM][MAX_NM]; // 0 based Indexing

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    cin >> n >> m;

    // 출발 지점
    arr[0][0] = 1;
    int x = 0, y = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int curr_dir = 0;

    int nx, ny;

    // i는 2부터
    for(int i = 2; i <= n * m; i++) {
        nx = x + dx[curr_dir];
        ny = y + dy[curr_dir];

        // 벗어났다면, 혹은 채워져있다면
        if(!InRange(nx, ny) || arr[nx][ny] != 0)
            curr_dir = (curr_dir + 1) % 4;

        x = x + dx[curr_dir];
        y = y + dy[curr_dir];
        arr[x][y] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}