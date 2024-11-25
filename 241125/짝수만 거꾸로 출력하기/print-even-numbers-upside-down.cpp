#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[101];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a % 2 == 0) {
            arr[cnt] = a;
            cnt++;
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}