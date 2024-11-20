#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'e') {
            str.erase(i, 1);
            break;
        }
    }
    cout << str;
    return 0;
}