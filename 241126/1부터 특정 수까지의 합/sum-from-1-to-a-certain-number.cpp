#include <iostream>
using namespace std;

int SumOneToN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    sum /= 10;
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << SumOneToN(n);

    return 0;
}