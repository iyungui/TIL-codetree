#include <iostream>
using namespace std;

#define MAX_N 1000

int n;
char arr[MAX_N + 1][MAX_N + 1]; // 1 based Indexing

int k;
int x, y, move_dir;

void Initialize(int num) {
    if(num <= n) {
        x = 1; y = num; move_dir = 0;
    } else if(num <= 2 * n) {
        x = num - n - 1; y = n - 1, move_dir = 1; 
    } else if(num <= 3 * n) {
        x = n - 1; y = n - (num - 2 * n); move_dir = 2;
    } else {
        x = n - (num - 3 * n); y = 0; move_dir = 3;
    }
}

bool InRange(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

void Move(int next_dir) {
    // 아래, 왼, 위, 오른쪽 순
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    x += dx[next_dir];
    y += dy[next_dir];
    move_dir = next_dir;
}

int Simulate() {
    int move_num = 0;
    while(InRange(x, y)) {
        if(arr[x][y] == '/') Move(move_dir ^ 1);
        else Move(3 - move_dir);
        move_num += 1;
    }

    return move_num;
}

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> arr[i][j];

    cin >> k;

    Initialize(k);

    int ans = Simulate();

    cout << ans;
    return 0;
}