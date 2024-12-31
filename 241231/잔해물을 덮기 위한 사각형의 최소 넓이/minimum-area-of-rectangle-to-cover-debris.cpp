#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX_SIZE 2000

int x1, x2, y1, y2;
int grid_a[MAX_SIZE + 1][MAX_SIZE + 1];
int grid_b[MAX_SIZE + 1][MAX_SIZE + 1];

void GetGrid(char c) {
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++)
            if(c == 'a') grid_a[i][j] = 1;
            else grid_b[i][j] = 1;
    }
}

int GetArea(bool isSquare) {
    int area = 0;

    for(int i = 0; i <= MAX_SIZE; i++) {
        for(int j = 0; j <= MAX_SIZE; j++) {
            if(isSquare) {
                if(grid_a[i][j] == 1) {
                    if(grid_b[i][j] == 1) continue;
                    area++;
                }
            } else {
                if(grid_a[i][j] == 1) {
                    area++;
                }
            }
        }
    }

    return area;
}

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    int min_ax = x1, min_ay = y1;
    int max_ax = x2, max_ay = y2;
    GetGrid('a');

    cin >> x1 >> y1 >> x2 >> y2;
    GetGrid('b');

    int ans;

    // a - b 가 직사각형이라면
    if((min_ax >= x1 && max_ax <= x2) || (min_ay >= y1 && max_ay <= y2)) {
        ans = GetArea(true);
    } else {
        ans = GetArea(false);
    }

    cout << ans;
    return 0;
}