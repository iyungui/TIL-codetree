#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int cur_direct = 3;

    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {

        if(a[i] == 'L') cur_direct = (cur_direct - 1 + 4) % 4;
        else if(a[i] == 'R') cur_direct = (cur_direct + 1) % 4;
        else if(a[i] == 'F') {
            x += dx[cur_direct];
            y += dy[cur_direct];
        }
    }

    cout << x << " " << y;
    return 0;
}