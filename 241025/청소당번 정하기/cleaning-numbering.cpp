#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_cnt = 0, b_cnt = 0, c_cnt = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i != 0) {
            if (i % 12 == 0) {
                c_cnt++;
            } else if (i % 3 == 0) {
                b_cnt++;
            } else if (i % 2 == 0) {
                a_cnt++;
            }
        }
    }
    cout << a_cnt << " " << b_cnt << " " << c_cnt;
    return 0;
}