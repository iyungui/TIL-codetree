#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    int n = 0;
    while (true) {
        // 우측으로 한 칸 밀기
        a = a[a.length() - 1] + a.substr(0, a.length() - 1);
        n++;
        if (a == b) break;
        if (n >= a.length()) {
            n = -1;
            break;
        }
    }
    cout << n;
    return 0;
}