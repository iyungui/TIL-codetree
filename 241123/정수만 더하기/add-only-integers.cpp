#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int answer = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            answer += str[i] - '0';
        }
    }
    cout << answer;
    return 0;
}