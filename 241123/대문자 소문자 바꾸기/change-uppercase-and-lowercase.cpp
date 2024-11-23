#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    string answer;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            answer += tolower(str[i]);
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            answer += toupper(str[i]);
        }
    }
    cout << answer;
    return 0;
}