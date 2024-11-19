#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    cin >> str;
    int len = str.length();
    while (len > 1) {
        cin >> n;
        if (n >= len) n = len - 1;
        str.erase(n, 1);
        len--;
        cout << str << endl;
    }
    
    return 0;
}