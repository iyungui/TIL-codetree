#include <iostream>
#include <string>
using namespace std;

#define MAX_N 1000

int n;

char arr[MAX_N + 1][MAX_N + 1]; // 1 based Indexing

int k;

int getStartRow() {
    if(k <= n) return 1;  // 상단
    else if(k <= 2*n) return k - n;  // 우측
    else if(k <= 3*n) return n;  // 하단
    else return 4*n - k + 1;  // 좌측
}

int getStartCol() {
    if(k <= n) return k;  // 상단
    else if(k <= 2*n) return n;  // 우측
    else if(k <= 3*n) return 3*n - k + 1;  // 하단 (역순)
    else return 1;  // 좌측
}

int GetDir() {
    if(k >= 1 && k <= n) return 0;  // 아래
    if(k >= n + 1 && k <= 2 * n) return 1;  // 왼쪽
    if(k >= 2 * n + 1 && k <= 3 * n) return 2;  // 위쪽
    if(k >= 3 * n + 1 && k <= 4 * n) return 3;  // 오른쪽 
}

bool InRange(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

int Rotate(int x, int y, int curr_dir, char curr_mirror) {
    if(curr_mirror == '/') {
        if(curr_dir == 0) return 1;
        if(curr_dir == 1) return 0;
        if(curr_dir == 2) return 3;
        if(curr_dir == 3) return 2;
    } else {
        if(curr_dir == 0) return 3;
        if(curr_dir == 1) return 2;
        if(curr_dir == 2) return 1;
        if(curr_dir == 3) return 0;
    }
}

    // 아래, 왼, 위, 오른쪽 순
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    // 입력
    cin >> n;

    string line;

    for(int i = 1; i <= n; i++) {
        cin >> line;

        for(int j = 1; j <= n; j++) {
            arr[i][j] = line[j - 1];
        }
    }
    
    cin >> k;

    // 출발지점
    int row = getStartRow();    // x
    int col = getStartCol();    // y
    // cout << " 출발지점: " << row << " " << col << endl;
    // 출발 방향
    int curr_dir = GetDir();

    int nx, ny;

    // cout << "시작 " << arr[row][col] << " ";
    curr_dir = Rotate(row, col, curr_dir, arr[row][col]);
    int ans = 1;    // 튕기고 시작
    // cout << arr[row][col] << " " << ans << " ";
    while(true) {
        
        nx = row + dx[curr_dir];
        ny = col = dy[curr_dir];

        if(!InRange(nx, ny)) {
            ans++;
            break;
        }

        char next_mirror = arr[nx][ny];
        curr_dir = Rotate(nx, ny, curr_dir, next_mirror);
        ans++;

        // cout << next_mirror << " " << ans << " ";
        row = nx;
        col = ny;
    }

    cout << ans;
    return 0;
}