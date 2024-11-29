#include <iostream>
#include <string>
using namespace std;

string a;

bool IsDifferent(string &a) {
    char first = a[0];
    for(int i = 1; i < a.length(); i++) {
        if(a[i] != first) return true;
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
