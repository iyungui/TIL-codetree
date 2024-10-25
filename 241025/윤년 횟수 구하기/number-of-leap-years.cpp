#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int i = 1, cnt = 0;
    while (i <= n) {
        if (i % 4 == 0) {
            if (i % 100 == 0 && i % 400 != 0) {
            } else {
                cnt++;  // 윤년
            }
        }
        // 평년
        i++;
    }
    cout << cnt;
    return 0;
}