#include <iostream>
#include <string>
using namespace std;

int ToDecimal(int n, int a) {
    int num = 0;
    string str_digits = to_string(n);
    for(int i = 0; i < str_digits.length(); i++) {
        num = num * a + (str_digits[i] - '0');
    }
    return num;
}

void PrintRadix(int n, int b) {
    int radix[20];
    int cnt = 0;
    while(true) {
        if(n < b) {
            radix[cnt++] = n;
            break;
        }
        radix[cnt++] = n % b;
        n /= b;
    }
    for(int i = cnt - 1; i >= 0; i--)
        cout << radix[i];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, n;
    cin >> a >> b >> n;
    // a 진수 -> 10 진수로 표현하기. [step 1] ... (문제 조건에서 a 는 10진수는 아님.)
    n = ToDecimal(n, a);
    // 10 진수 -> b 진수로 표현하기. [step 2]
    PrintRadix(n, b);
    return 0;
}