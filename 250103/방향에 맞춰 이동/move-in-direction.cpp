#include <iostream>
using namespace std;

int n;

int GetDir(char a) {
    if(a == 'E') return 0;
    if(a == 'S') return 1;
    if(a == 'W') return 2;
    if(a == 'N') return 3;
}

int main() {
    // Please write your code here.
    cin >> n;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int x = 0, y = 0;   // 현재 위치
    
    for(int i = 0; i < n; i++) {
        char c;
        int d;

        cin >> c >> d;

        int curr_dir = GetDir(c);

        x += dx[curr_dir] * d;
        y += dy[curr_dir] * d;
    }

    cout << x << " " << y;
    return 0;
}