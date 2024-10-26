#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a;
    cin >> n;
    int sum = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
        cnt++;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / cnt;
    return 0;
}