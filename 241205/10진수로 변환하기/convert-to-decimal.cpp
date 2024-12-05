#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int binary[8];
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {
        binary[i] = a[i] - '0';
    }
    int num = 0;
    for(int i = 0; i < a.length(); i++) {
        num = num * 2 + binary[i];
    }
    cout << num;
    return 0;
}