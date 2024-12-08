#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX_N 100
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_N + 1];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int min_sum = INT_MAX;
    for(int i = 1; i <= n; i++) {
        int sum = 0;
        for(int j = 1; j <= n; j++) {
            int cnt = abs(i - j);
            sum += arr[j] * cnt;
        }
        min_sum = min(min_sum, sum);
    }
    cout << min_sum;
    return 0;
}