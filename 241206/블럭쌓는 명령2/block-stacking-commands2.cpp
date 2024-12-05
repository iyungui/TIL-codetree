#include <iostream>
using namespace std;

#define MAX_VAL 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int arr[MAX_VAL + 1] = {};
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++) {
            arr[j]++;
        }
    }
    int max_cnt = arr[0];
    for(int i = 1; i <= n; i++) {
        max_cnt = max(max_cnt, arr[i]);
    }
    cout << max_cnt;
    return 0;
}