#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int l = str.length();

    for (int i = 0; i <= l; i++) {
        cout << str.substr(l - i, i) + str.substr(0, l - i) << endl;
    }
    return 0;
}