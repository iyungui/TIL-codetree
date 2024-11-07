#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    // 원소 입력
    int arr[n];
    int cnt_arr[10] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt_arr[arr[i]]++;
    }
    for (int i = 1; i < 10; i++) {
        cout << cnt_arr[i] << endl;
    }
    return 0;
}