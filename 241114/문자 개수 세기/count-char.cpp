#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    getline(cin, str);
    cin >> a;

    int cnt = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == a) cnt++;
    }
    cout << cnt;
    return 0;
}