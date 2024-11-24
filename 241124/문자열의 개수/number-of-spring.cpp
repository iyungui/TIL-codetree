#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int cnt = 0;
    string arr[200];
    while (true) {
        cin >> str;
        if (str == "0") break;
        arr[cnt] = str;
        cnt++;
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        if (i % 2 == 0)
            cout << arr[i] << endl;
    }
    return 0;
}