#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    for (int i = a.length() - 1; a[i] != '\0'; i--) {
        if ((i + 1) % 2 == 0) cout << a[i];
    }
    return 0;
}