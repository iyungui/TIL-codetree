#include <iostream>
using namespace std;

#define MAX_R 200000
#define OFFSET 100000

int n;
int checked[MAX_R + 1];
int cur = OFFSET;

int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int distance;
        char direction;
        cin >> distance >> direction;
        
        if(direction == 'R') {
            // 현재 위치부터 distance개의 타일을 뒤집음
            for(int j = 0; j < distance; j++) {
                checked[cur + j] = 2;
            }
            cur += (distance - 1);  // 마지막으로 뒤집은 타일의 위치로
        } else {  // direction == 'L'
            // 현재 위치부터 왼쪽으로 distance개의 타일을 뒤집음
            for(int j = 0; j < distance; j++) {
                checked[cur - j] = 1;
            }
            cur -= (distance - 1);  // 마지막으로 뒤집은 타일의 위치로
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