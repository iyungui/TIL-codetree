#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int sum_val = 0, cnt = 0;
    
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum_val += i;
            cnt++;
        }
    }
    cout << sum_val << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum_val / cnt;
    return 0;
}