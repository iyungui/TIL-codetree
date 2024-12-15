#include <iostream>
using namespace std;

#define MAX_N 15

char arr[MAX_N][MAX_N];
int r, c;

int FindCase() {
    if (arr[0][0] == arr[r - 1][c - 1]) return 0;

    char first = arr[0][0];
    int cnt = 0;

    // 첫 번째 점프 탐색
    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            for (int k = i + 1; k < r - 1; k++) {
                for (int l = j + 1; l < c - 1; l++) {
                    if(arr[0][0] != arr[i][j] && arr[i][j] != arr[k][l] && arr[k][l] != arr[r - 1][c - 1])
                        cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << FindCase();

    return 0;
}