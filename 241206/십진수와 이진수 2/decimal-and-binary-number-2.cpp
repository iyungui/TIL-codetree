#include <iostream>
#include <string>
using namespace std;

void Decimal(int &n) {
    string str = to_string(n);
    int num = 0;
    for(int i = 0; i < str.length(); i++) {
        num = num * 2 + str[i] - '0';
    }
    n = num;
}

void PrintBinary(int n) {
    int cnt = 0;
    int digits[20];
    string str;
    while(true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
        digits[cnt++] = n % 2;
        n /= 2;
    }
    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Decimal(n);
    n *= 17;
    PrintBinary(n);
    return 0;
}