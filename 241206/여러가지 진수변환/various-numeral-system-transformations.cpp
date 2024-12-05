#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;
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
    for(int i = cnt - 1; i >= 0; i--) {
        cout << radix[i];
    }
    return 0;
}