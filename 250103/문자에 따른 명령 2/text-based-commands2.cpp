#include <iostream>
#include <string>

using namespace std;

string a;

int main() {

    cin >> a;

    int x = 0, y = 0;   // current position
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int curr_dir = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 'L') {
            curr_dir = (curr_dir - 1 + 4) % 4;
        } else if(a[i] == 'R') {
            curr_dir = (curr_dir + 1) % 4;
        } else if(a[i] == 'F') {
            x += dx[curr_dir];
            y += dy[curr_dir];
        }
    }

    cout << x << " " << y;
    
    return 0;
}