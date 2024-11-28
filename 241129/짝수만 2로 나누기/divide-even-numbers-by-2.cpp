#include <iostream>
using namespace std;

int n;

void DivideEvenNum(int *arr) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) arr[i] /= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int arr[50];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    DivideEvenNum(arr);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}