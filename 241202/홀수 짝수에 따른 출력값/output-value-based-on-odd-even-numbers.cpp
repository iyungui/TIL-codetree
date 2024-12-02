#include <iostream>
using namespace std;

int EvenSum(int n) {
    if(n == 2) return 2;
    return n + EvenSum(n - 2);
}

int OddSum(int n) {
    if(n == 1) return 1;
    return n + OddSum(n - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n % 2 == 0) cout << EvenSum(n);
    else cout << OddSum(n);
    return 0;
}