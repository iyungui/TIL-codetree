#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    string answer;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            answer += tolower(str[i]);
        } else if (isdigit(str[i])) {
            answer += str[i];
        }
    }
    cout << answer;
    return 0;
}