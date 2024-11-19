#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    // solution: substr
    // cout << str.substr(0, 1) + str.substr(2, str.length() - 4) + str.substr(str.length() - 1);
    
    // solution: erase
    str.erase(1, 1);
    str.erase(str.length() - 2, 1);
    cout << str;
    return 0;
}