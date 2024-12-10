#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 10000

// int arr[MAX_N + 1] = {};

// int GetMaxScore(int max_idx, int k) {
//     if(max_idx < k) {
//         int score = 0;
//         for(int i = 1; i <= max_idx; i++) {
//             score += arr[i];
//         }
//         return score;
//     }

//     int max_score = INT_MIN;

//     for(int i = 1; i <= max_idx - k; i++) {
//         int score = 0;
//         for(int j = i; j <= i + k; j++) {
//             score += arr[j];
//         }
//         max_score = max(max_score, score);
//     }

//     return max_score;
// }

// int main() {
//     // 여기에 코드를 작성해주세요.
//     int n, k;
//     cin >> n >> k;
    
//     int max_idx = INT_MIN;

//     for(int i = 1; i <= n; i++) {
//         int idx;
//         char a;
//         cin >> idx;
//         cin >> a;
//         if(a == 'G') arr[idx] = 1;
//         else if(a == 'H') arr[idx] = 2;

//         max_idx = max(max_idx, idx);
//     }

//     cout << GetMaxScore(max_idx, k);
//     return 0;
// }

int arr[MAX_N + 1];

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        int idx;
        char a;
        cin >> idx >> a;
        if(a == 'G') arr[idx] = 1;
        else arr[idx] = 2;
    }
    int max_score = INT_MIN;
    for(int i = 1; i <= MAX_N - k; i++) {
        int score = 0;
        for(int j = i; j <= i + k; j++) {
            score += arr[j];
        }
        max_score = max(max_score, score);
    }
    cout << max_score;
    return 0;
}