#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N + 1];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int max_cnt = INT_MIN;
    int cnt;
    for(int i = 1; i <= n; i++) {
        if(i == 1 || arr[i - 1] != arr[i]) {
            cnt = 0;
        }
        cnt++;
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}