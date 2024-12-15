#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    string str = to_string(a);
    
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(str[i] == '1' && i == n - 1) str[i] = '0';
        else if(str[i] == '0') {
            str[i] = '1';
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int num = 1;
        for(int j = n - i - 1; j > 0; j--) {
            num *= 2;
        }
        sum += num * (int)(str[i] - '0');
    }
    cout << sum;
    return 0;
}