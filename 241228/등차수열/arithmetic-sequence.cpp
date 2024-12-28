#include <iostream>
using namespace std;

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_N];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = 0; k <= 100; k++) {
                if((arr[j] - k) == (k - arr[i])) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}