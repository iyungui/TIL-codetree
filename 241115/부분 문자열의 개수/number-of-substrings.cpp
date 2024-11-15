#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int cnt = 0;

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, 2) == b) cnt++;
    }
    cout << cnt;
    return 0;
}