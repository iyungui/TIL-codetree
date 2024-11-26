#include <iostream>
#include <string>
using namespace std;

/*
내 풀이
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
*/

// 답지 풀이

bool Contains369(int n) {
    // 계속 10으로 n을 나눠주며, 그 다음 일의 자리를 조사
    while(n > 0) {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) return true;

        n /= 10;
    }
    return false;
}

bool isMagicNumber(int n) {
    return Contains369(n) || (n % 3 == 0);
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