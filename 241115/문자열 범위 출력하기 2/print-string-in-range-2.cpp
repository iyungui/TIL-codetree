#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = a.length() - 1; a[i] != '\0'; i--) {
        cout << a[i];
        cnt++;
        if (cnt == n) break;
    }
    return 0;
}