#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n, m;
int grid[MAX_N][MAX_N];
int seq[MAX_N];

bool IsHappySequence() {
    int max_cnt = 1, curr_cnt = 1;

    for(int i = 1; i < n; i++) {
        if(seq[i - 1] == seq[i])
            curr_cnt++;
        else
            curr_cnt = 1;
        max_cnt = max(max_cnt, curr_cnt);
    }
    return max_cnt >= m;
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int happy_cnt = 0;

    // 행복한 수열인지 아닌지 판단하는 함수
    // 행을 탐색
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++)
            seq[col] = grid[row][col];
        if(IsHappySequence()) happy_cnt++;
    }

    // 열을 탐색
    for(int col = 0; col < n; col++) {
        for(int row = 0; row < n; row++)
            seq[row] = grid[row][col];
        if(IsHappySequence()) happy_cnt++;
    }

    cout << happy_cnt;

    return 0;
}