#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;
    cin >> s >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            int a, b;
            char temp;
            cin >> a >> b;
            temp = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = temp;
            cout << s << endl;
        } else if (n == 2) {
            char a, b;
            cin >> a >> b;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == a) s[j] = b;
            }
            cout << s << endl;
        }
    }
    return 0;
}