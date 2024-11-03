#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, avg = 0;
    int arr[10];
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            cnt = i;
            break;
        }
        cnt = 10;
    }
    for (int i = 0; i < cnt; i++) {
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}