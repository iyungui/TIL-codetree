#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // 0시 0분 에서 ~ c시 d분까지 총 몇 분
    int total_min = c * 60 + d;

    // 0시 0분에서 ~ a 시 b분까지 총 몇 분?
    int first_min = a * 60 + b;

    cout << total_min - first_min;
    return 0;
}