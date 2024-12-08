#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 20

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_N][MAX_N];
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            max_sum = max(max_sum, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
        }
    }
    cout << max_sum;
    return 0;
}