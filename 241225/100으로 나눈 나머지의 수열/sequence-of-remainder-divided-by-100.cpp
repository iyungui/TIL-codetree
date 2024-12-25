#include <iostream>
using namespace std;

int F(int n) {
    if(n == 0) return 2;
    else if(n == 1) return 4;

    return (F(n - 2) * F(n - 1)) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << F(n - 1);
    return 0;
}