#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, cnt = 10;
    int arr[10];
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 0) {
            cnt = i;
            break;
        }
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / cnt;
    return 0;
}