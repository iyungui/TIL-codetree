#include <iostream>
using namespace std;

int Factorial(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return n * Factorial(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}