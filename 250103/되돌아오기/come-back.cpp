#include <iostream>
using namespace std;

int t;
int n;
int x, y;   // current position
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
char c;
int d;

int GetDir(char a) {
    if(a == 'E') return 0;
    if(a == 'S') return 1;
    if(a == 'W') return 2;
    if(a == 'N') return 3;
}


int main() {
    cin >> n;

    int answer = -1;
    int nx, ny;
    for(int i = 0; i < n; i++) {
        cin >> c >> d;

        int curr_dir = GetDir(c);

        for(int j = 0; j < d; j++) {
            nx = x + dx[curr_dir];
            ny = y + dy[curr_dir];

            t++;

            if(nx == 0 && ny == 0) {
                answer = t;
                break;
            }
            x = nx;
            y = ny;
        }

        if(answer == t) break; 
    }

    cout << answer;

    return 0;
}