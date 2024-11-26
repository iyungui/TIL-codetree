#include <iostream>
#include <string>
using namespace std;

bool Is369(int n) {
    string str = to_string(n);
    // cout << str << endl;
    for (int i = 0; i < str.length(); i++) {
        int a = str[i] - '0';
        // cout << a << endl;
        if (a == 3 || a == 6 || a == 9) return true;
    }
    return false;
}

bool isMagicNumber(int a) {
    if (a % 3 == 0) {
        return true;
    }
    return Is369(a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if(isMagicNumber(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}