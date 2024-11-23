#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    string a;
    cin >> n >> a;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == a) cnt++;
    }
    cout << cnt;
    return 0;
}