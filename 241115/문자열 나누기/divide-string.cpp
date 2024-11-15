#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[10];
    string str_all;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        str_all += str[i];
    }
    for (int i = 0; i < str_all.length(); i++) {
        cout << str_all[i];
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}