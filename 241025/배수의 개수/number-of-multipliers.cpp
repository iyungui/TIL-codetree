#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int three_cnt = 0, five_cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 3 == 0) {
            three_cnt++;
        }
        if (n % 5 == 0) {
            five_cnt++;
        }
    }
    cout << three_cnt << " " << five_cnt;
    return 0;
}