#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int k;
    int arr[10];
    bool isFirst = true;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 3 == 0 && isFirst) {
            k = i;
            isFirst = false;
        }
    }
    cout << arr[k - 1];
    return 0;
}