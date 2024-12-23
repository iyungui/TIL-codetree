#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x = 0, y = 0;
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};

    for(int i = 0; i < n; i++) {
        char direction;
        int distance;
        cin >> direction >> distance;

        // 각 방향에 맞는 번호를 붙여주기
        int dir;
        if(direction == 'W') dir = 0;
        else if(direction == 'S') dir = 1;
        else if(direction == 'N') dir = 2;
        else if(direction == 'E') dir = 3;
        
        x += dx[dir] * distance;
        y += dy[dir] * distance;
    }

    cout << x << " " << y;
    return 0;
}