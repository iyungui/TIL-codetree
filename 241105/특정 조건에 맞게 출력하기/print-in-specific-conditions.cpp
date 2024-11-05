#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int i;
    int arr[100];
    for(i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            break;
    }
    for(int j = 0; j < i; j++) {
        if (arr[j] % 2 == 1)
            cout << arr[j] + 3 << " ";
        else
            cout << arr[j] / 2 << " ";
    }
    return 0;
}