#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    cin >> n;
    arr[1] = n;
    arr[0] = 1;
    cout << arr[0] << " " << arr[1] << " ";
    for(int i = 2; i < 100; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
        if(arr[i] > 100) break;
    }
    return 0;
}