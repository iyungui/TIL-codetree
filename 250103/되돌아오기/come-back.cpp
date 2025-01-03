#include <iostream>
using namespace std;

int t;
int n;
int x, y;   // current position
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
char c;
int d;
int answer = -1;

int GetDir(char a) {
    if(a == 'E') return 0;
    if(a == 'S') return 1;
    if(a == 'W') return 2;
    if(a == 'N') return 3;
}

bool Move(int curr_dir, int distance) {
    while(distance--) {
        x += dx[curr_dir];
        y += dy[curr_dir];
        t++;
        if(x == 0 && y == 0) {
            answer = t;
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> c >> d;

        int curr_dir = GetDir(c);
        
        if(Move(curr_dir, d)) break; 
    }

    cout << answer;

    return 0;
}