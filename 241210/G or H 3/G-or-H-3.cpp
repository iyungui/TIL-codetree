#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int arr[MAX_N + 1] = {};
    int max_idx = INT_MIN;

    for(int i = 1; i <= n; i++) {
        int idx;
        char a;
        cin >> idx;
        cin >> a;
        if(a == 'G') arr[idx] = 1;
        else if(a == 'H') arr[idx] = 2;

        max_idx = max(max_idx, idx);
    }
    int max_score = INT_MIN;
    for(int i = 1; i <= max_idx - k; i++) {
        int score = 0;
        for(int j = i; j <= i + k; j++) {
            score += arr[j];
        }
        max_score = max(max_score, score);
    }
    cout << max_score;
    return 0;
}