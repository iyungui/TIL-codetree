#include <iostream>

using namespace std;

int n, m;
int arr[100][100];
const int dy[] = {0, 1, 0, -1};
const int dx[] = {1, 0, -1, 0};

int y, x;
int dir;    // 0: 오른쪽, 1: 아래, 2: 왼, 3: 위

int main() {
    cin >> n >> m;
    
    arr[y][x] = 1;

    for (int i = 2; i <= n * m; i++) {
        int ny = y + dy[dir], nx = x + dx[dir];
        if(ny >= n || ny < 0 || nx >= m || nx < 0 || arr[ny][nx] != 0)
            dir = (dir + 1) % 4;    // 더 이상 나아갈 수 없을 때, 시계방향 회전

        y += dy[dir], x += dx[dir];
        arr[y][x] = i;
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}