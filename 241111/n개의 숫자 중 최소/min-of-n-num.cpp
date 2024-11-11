#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min_val = arr[0];
    for (int i = 0; i < n; i++) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (min_val == arr[i]) cnt++;
    }
    cout << min_val << " " << cnt;
    return 0;
}