#include <iostream>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // 0일 0시 0분 부터 11일 11시 11분까지의 시간 (분)
    int y = 11 + (11 * 60) + ((60 * 24) * 11);

    // 0일 0시 0분 부터 a일 b시 c분까지의 시간 (분)
    int x = c + (b * 60) + ((60 * 24) * a);

    if(x - y < 0) cout << -1;
    else cout << x - y;
    return 0;
}