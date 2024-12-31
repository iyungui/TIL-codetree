#include <iostream>
#include <algorithm>

#define N 2
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int x1[N], y1[N];
int x2[N], y2[N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    for(int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for(int i = 0; i < N; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = i + 1;
    
    int min_x = MAX_R, max_x = 0;
    int min_y = MAX_R, max_y = 0;
    bool first_rect_exist = false;
    for(int x = 0; x <= MAX_R; x++) {
        for(int y = 0; y <= MAX_R; y++) {
            if(checked[x][y] == 1) {
                first_rect_exist = true;
                min_x = min(min_x, x);
                max_x = max(max_x, x);
                min_y = min(min_y, y);
                max_y = max(max_y, y);
            }
        }
    }

    int area = 0;
    if(!first_rect_exist) area = 0;
    else area = (max_x - min_x + 1) * (max_y - min_y + 1);

    cout << area;
    return 0;
}