#include <iostream>
#include <string>
using namespace std;

#define MAX_N 99

int n, t;
int arr[MAX_N][MAX_N];  // 0 based indexing
string a;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    cin >> n >> t;
    cin >> a;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    // current position
    int x = n / 2, y = n / 2;
    int curr_dir = 0;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int nx, ny;

    int sum = arr[x][y];

    for(int i = 0; i < (int)a.size(); i++) {
        if(a[i] == 'L') {
            curr_dir = (curr_dir - 1 + 4) % 4;
        } else if(a[i] == 'R') {
            curr_dir = (curr_dir + 1) % 4;
        } else if(a[i] == 'F') {
            nx = x + dx[curr_dir];
            ny = y + dy[curr_dir];

            if(InRange(nx, ny)) {
                sum += arr[nx][ny];
                x = nx;
                y = ny;
            }
        }
    }

    cout << sum;
    return 0;
}