#include <iostream>
using namespace std;

int n, t;
int x, y;   // current position
char d;

int GetDir(char a) {
    if(a == 'U') return 2;
    if(a == 'D') return 1;
    if(a == 'R') return 0;
    if(a == 'L') return 3;
}

bool InRange(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

int main() {
    // Please write your code here.
    cin >> n >> t;
    cin >> x >> y >> d; 

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    int curr_dir = GetDir(d);

    int nx, ny;

    while(t--) {
        nx = x + dx[curr_dir];
        ny = y + dy[curr_dir];

        if(!InRange(nx, ny)) {
            curr_dir = 3 - curr_dir;
            continue;
        }

        x = nx;
        y = ny;
    }

    cout << x << " " << y;
    return 0;
}