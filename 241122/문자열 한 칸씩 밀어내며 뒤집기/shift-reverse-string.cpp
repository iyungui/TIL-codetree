#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int q;
    cin >> a >> q;
    int len = a.length();
    
    for (int i = 0; i < q; i++) {
        int c;
        cin >> c;

        if (c == 1) {
            a = a.substr(1, len - 1) + a[0];
            cout << a;
        } else if (c == 2) {
            a = a[len - 1] + a.substr(0, len - 1);
            cout << a;
        } else if (c == 3) {

            string reversed_str;
            for (int i = len - 1; i >= 0; i--) {
                reversed_str += a[i];
            }
            cout << reversed_str;
            a = reversed_str;
        }
        cout << endl;
    }
    return 0;
}