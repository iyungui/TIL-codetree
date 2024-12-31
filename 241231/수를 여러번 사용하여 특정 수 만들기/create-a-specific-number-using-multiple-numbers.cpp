#include <iostream>
using namespace std;

int a, b, c;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c;

    int ans = 0;

    // a를 몇 회 사용할지 전부 시도
    for(int i = 0 ; i * a <= c; i++) {
        int cnt = a * i;

        int num_b = (c - cnt) / b;
        cnt += num_b * b;

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}