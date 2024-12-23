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

        if(direction == 'W') {
            x += dx[0] * distance;
            y += dy[0] * distance;
        } else if(direction == 'S') {
            x += dx[1] * distance;
            y += dy[1] * distance;
        } else if(direction == 'N') {
            x += dx[2] * distance;
            y += dy[2] * distance;
        } else if(direction == 'E') {
            x += dx[3] * distance;
            y += dy[3] * distance;
        }
    }

    cout << x << " " << y;
    return 0;
}