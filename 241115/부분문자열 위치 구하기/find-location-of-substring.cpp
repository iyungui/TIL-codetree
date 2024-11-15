#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    int start_idx = -1;

    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, b.length()) == b) {
            start_idx = i;
            break;
        }
    }
    cout << start_idx;
    return 0;
}