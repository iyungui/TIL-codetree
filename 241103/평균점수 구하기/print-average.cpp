#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[100];
    double sum = 0;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;
    return 0;
}