#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_N];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(ans < arr[j] - arr[i]) {
                ans = arr[j] - arr[i];
            }
        }
    }

    cout << ans;
    return 0;
}