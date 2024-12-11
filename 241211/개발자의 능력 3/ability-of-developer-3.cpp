#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[6];

int GetDiff(int i, int j, int k) {
    int sum1 = arr[i] + arr[j] + arr[k];
    int sum2 = 0;
    for(int i = 0; i < 6; i++) sum2 += arr[i];
    sum2 -= sum1;
    return abs(sum1 - sum2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int min_diff = INT_MAX;
    for(int i = 0; i < 6; i++)
        cin >> arr[i];
    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 6; j++) {
            for(int k = j + 1; k < 6; k++) {
                min_diff = min(min_diff, GetDiff(i, j, k));
            }
        }
    }
    cout << min_diff;
    return 0;
}