#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    string q;
    cin >> q;

    for (int i = 0; i < q.length(); i++) {
        if (q[i] == 'L') {
            str = str.substr(1, str.length() - 1) + str[0];
        } else {
            str = str[str.length() - 1] + str.substr(0, str.length() - 1);
        }
    }

    cout << str;
    return 0;
}