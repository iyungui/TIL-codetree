#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    cin >> arr[0] >> arr[1];
    cout << arr[0] << " " << arr[1] << " ";
    for (int i = 2; i < 10; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] >= 10)
            cout << arr[i] % 10 << " ";
        
        else if (arr[i] >= 100)
            cout << arr[i] % 100 << " ";
        else
            cout << arr[i] << " ";
    }
    return 0;
}