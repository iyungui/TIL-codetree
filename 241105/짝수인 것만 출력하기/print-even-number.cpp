#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int x;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            arr[i] = x;
            cout << arr[i] << " ";
        }
    }
    return 0;
}