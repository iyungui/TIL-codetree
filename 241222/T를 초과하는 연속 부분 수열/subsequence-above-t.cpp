#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 1000

int n, t;
int arr[MAX_N + 1];

int main() {
    cin >> n >> t;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int cnt;
    int max_cnt = INT_MIN;

    for(int i = 1; i <= n; i++) {
        if(arr[i] > t) cnt++;
        else cnt = 0;
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}