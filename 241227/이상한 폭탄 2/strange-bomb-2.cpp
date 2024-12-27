#include <iostream>
using namespace std;

#define MAX_NUM 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int arr[MAX_NUM];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = -1;

    for(int i = 0; i < n - 1; i++) {
        int num;
        for(int j = i + 1; j <= i + 3; j++) {
            if(arr[i] == arr[j]) {
                num = arr[j];
                if(ans < num) ans = num;
                break;
            }
            if(arr[j] == arr[n - 1]) break;
        }
    }

    cout << ans;
    return 0;
}