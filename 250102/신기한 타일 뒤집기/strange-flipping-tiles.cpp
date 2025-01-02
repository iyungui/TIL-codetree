#include <iostream>
using namespace std;

#define MAX_R 200000
#define OFFSET 100

int n;
int checked[MAX_R + 1];
int x1, x2;

int cur = 0;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int distance;
        char direction;
        cin >> distance >> direction;

        if(direction == 'R') {
            for(int j = cur + OFFSET; j < (cur + distance) + OFFSET; j++) {
                checked[j] = 2;
            }
            cur += (distance);
        } else if(direction == 'L') {
            for(int j = (cur - distance) + OFFSET; j < cur + OFFSET; j++) {
                checked[j] = 1;
            }
            cur -= (distance);
        }
    }

    int cnt_w = 0, cnt_b = 0;
    for(int i = 0; i <= MAX_R; i++) {
        if(checked[i] == 1) cnt_w++;
        else if(checked[i] == 2) cnt_b++;
    }
    cout << cnt_w << " " << cnt_b;
    return 0;
}