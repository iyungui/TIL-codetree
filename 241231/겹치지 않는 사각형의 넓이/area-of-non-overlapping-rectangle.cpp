#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX_SIZE 2000

int grid_a[MAX_SIZE + 1][MAX_SIZE + 1];
int grid_b[MAX_SIZE + 1][MAX_SIZE + 1];
int grid_m[MAX_SIZE + 1][MAX_SIZE + 1];
int x1, x2, y1, y2;
int sum = 0;

void GetGrid(char c) {
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;

    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++) {
            if(c == 'a') grid_a[i][j] = 1;
            else if(c == 'b') grid_b[i][j] = 1;
            else grid_m[i][j] = 1;
        }
    }
}

int GetArea(char c) {
    int area = 0;

    for(int i = 0; i <= MAX_SIZE; i++) {
        for(int j = 0; j <= MAX_SIZE; j++) {
            if(c == 'a') {
                if(grid_a[i][j] == 1) {
                    if(grid_m[i][j] == 1) continue;
                    area++;
                }

            } else if(c == 'b') {
                if(grid_b[i][j] == 1) {
                    if(grid_m[i][j] == 1) continue;
                    area++;
                }
            }
        }
    }

    return area;
}

int main() {
    
    cin >> x1 >> y1 >> x2 >> y2;
    GetGrid('a');

    cin >> x1 >> y1 >> x2 >> y2;
    GetGrid('b');

    cin >> x1 >> y1 >> x2 >> y2;
    GetGrid('m');

    sum += GetArea('a');
    sum += GetArea('b');

    cout << sum;

    return 0;
}