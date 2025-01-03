#include <iostream>
using namespace std;

#define MAX_NUM 100

int n, m;
int x, y;   // current position
char arr[MAX_NUM][MAX_NUM];
bool visited[MAX_NUM][MAX_NUM];
int curr_dir = 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    cin >> n >> m;

    int cnt = 0;
    arr[0][0] = 'A';
    visited[0][0] = true;
    
    int nx, ny;
    for(int i = 1; i < n * m; i++) {
        nx = x + dx[curr_dir];
        ny = y + dy[curr_dir];

        if(!InRange(nx, ny) || visited[nx][ny]) {
            curr_dir = (curr_dir + 1) % 4;
        }
        x += dx[curr_dir];
        y += dy[curr_dir];

        arr[x][y] = (char)(i % 26 + 'A');
        visited[x][y] = true;
        cnt++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}