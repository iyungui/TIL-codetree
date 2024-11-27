#include <iostream>
#include <string>
using namespace std;

bool IsEvenSum(int n) {
    int sum = 0;
    string str = to_string(n);

    for(int i = 0; i < str.length(); i++) {
        sum += str[i] - '0';
    }

    return (sum % 2 == 0);
}

bool IsPrime(int n) {
    if(n == 1) return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool IsMagicNumber(int n) {
    return IsPrime(n) && IsEvenSum(n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(IsMagicNumber(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}