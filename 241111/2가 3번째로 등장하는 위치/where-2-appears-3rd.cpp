#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 2) cnt++;
        if (cnt == 3) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}