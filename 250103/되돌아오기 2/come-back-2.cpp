#include <iostream>
#include <string>
using namespace std;

string a;
int curr_dir = 3;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int x, y;
int t;
int ans = -1;

int main() {
    cin >> a;

    int nx, ny;
    for(int i = 0; i < (int)a.size(); i++) {
        if(a[i] == 'L') {
            curr_dir = (curr_dir - 1 + 4) % 4;
        } else if(a[i] == 'R') {    
            curr_dir = (curr_dir + 1) % 4;
        } else if(a[i] == 'F') {
            nx = x + dx[curr_dir];
            ny = y + dy[curr_dir];
        }
        t++;

        if(nx == 0 && ny == 0) {
            ans = t;
            break;
        }

        x = nx;
        y = ny;
    }

    cout << ans;
    
    return 0;
}