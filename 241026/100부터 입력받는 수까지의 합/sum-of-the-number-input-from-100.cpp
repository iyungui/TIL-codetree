#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum_val = 0;
    for (int i = n; i <= 100; i++) {
        sum_val += i;
    }
    cout << sum_val;
    return 0;
}