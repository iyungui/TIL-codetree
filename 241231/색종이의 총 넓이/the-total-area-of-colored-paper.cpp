#include <iostream>
using namespace std;

#define MAX_SIZE 200
#define OFFSET 100
#define MAX_N 100

int n;
int x, y;
int grid[MAX_SIZE + 1][MAX_SIZE + 1];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        x += OFFSET;
        y += OFFSET;

        for(int j = x; j < x + 8; j++) {
            for(int k = y; k < y + 8; k++)
                grid[j][k] = 1;
        }
    }

    int area = 0;

    for(int i = 0; i <= MAX_SIZE; i++) {
        for(int j = 0; j <= MAX_SIZE; j++)
            if(grid[i][j] == 1) area++;
    }

    cout << area;

    return 0;
}