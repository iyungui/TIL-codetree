#include <iostream>
using namespace std;

int n;

void AbsoluteValue(int *arr) {
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) arr[i] *= -1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int arr[50];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    AbsoluteValue(arr);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}