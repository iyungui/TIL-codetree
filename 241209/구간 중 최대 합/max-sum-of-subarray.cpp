#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    int arr[MAX_N + 1];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_sum = INT_MIN;
    
    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j <= i + k - 1; j++) {
            sum += arr[j];
        }
        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}