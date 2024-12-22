#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int n;
int arr[MAX_N + 1];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    int cnt;
    int max_cnt = INT_MIN;
    for(int i = 1; i <= n; i++) {
        if(i == 1 || arr[i - 1] * arr[i] < 0) {
            cnt = 0;
        }
        cnt++;
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}