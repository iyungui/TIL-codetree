#include <iostream>
#include <string>
using namespace std;

string a;

bool IsDifferent(string &a) {
    string b;
    int len = 0;
    for(int i = 0; i < a.length(); i++) {
        if(b[len] != a[i]) {
            b += a[i];
            len++;
        }
        if(len >= 2) return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a;
    if(IsDifferent(a)) cout << "Yes";
    else cout << "No";
    return 0;
}