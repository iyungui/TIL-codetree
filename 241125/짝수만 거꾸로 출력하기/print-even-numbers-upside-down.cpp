#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[50] = {};

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) arr[i] = a;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
    return 0;
}