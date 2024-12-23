#include <iostream>
using namespace std;

int n, t;
int r, c;
char d;

int GetDir(char d) {
    if(d == 'U') return 2;
    else if(d == 'D') return 1;
    else if(d == 'R') return 0;
    else if(d == 'L') return 3;
}

bool InRange(int nx, int ny) {
    return nx > 0 && nx <= n && ny > 0 && ny <= n;
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int curr_dir = GetDir(d);

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    int nx, ny;

    while(t > 0) {
        nx = r + dx[curr_dir];
        ny = c + dy[curr_dir];

        if(!InRange(nx, ny)) {
            t--;
            curr_dir = 3 - curr_dir;
            continue;
        }

        r = nx, c = ny;
        t--;
    }
    
    cout << r << " " << c;
    return 0;
}