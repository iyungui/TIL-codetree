#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, sum = 0, cnt = 0;
    for (int i = 1; i <= 10; i++) {
        cin >> a;
        if (a >= 0 && a <= 200) {
            sum += a;
            cnt++;
        }
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / cnt;
    return 0;
}