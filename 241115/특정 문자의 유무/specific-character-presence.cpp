#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    bool exists_ee = false, exists_ab = false;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 2) == "ee") {
            exists_ee = true;
        }
        if (str.substr(i, 2) == "ab") {
            exists_ab = true;
        }
    }
    if (exists_ee) cout << "Yes";
    else cout << "No";

    cout << " ";

    if (exists_ab) cout << "Yes";
    else cout << "No";

    return 0;
}