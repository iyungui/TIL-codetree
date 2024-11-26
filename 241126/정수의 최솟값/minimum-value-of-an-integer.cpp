#include <iostream>
using namespace std;

int MinABC(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << MinABC(a, b, c);
    return 0;
}