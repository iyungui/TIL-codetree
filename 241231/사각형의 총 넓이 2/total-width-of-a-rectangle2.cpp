#include <iostream>

using namespace std;

#define MAX_N 10
#define MAX_SIZE 200
#define OFFSET 100

int n;
int x1[MAX_N], y1[MAX_N], x2[MAX_N], y2[MAX_N];
int grid[MAX_SIZE + 1][MAX_SIZE + 1];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            for(int k = y1[i]; k < y2[i]; k++)
                grid[j][k] = 1;
        }
    }

    int area = 0;
    for(int i = 0; i <= MAX_SIZE; i++) {
        for(int j = 0; j <= MAX_SIZE; j++) {
            if(grid[i][j] == 1) area++;
        }
    }

    cout << area;
    return 0;
}