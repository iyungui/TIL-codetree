#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if((i + 1) % 2 == 1) {
            sort(arr, arr + i + 1);
            cout << arr[i / 2] << " ";
        }
    }

    return 0;
}