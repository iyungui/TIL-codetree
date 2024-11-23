#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    string str = to_string(sum);
    cout << str.substr(1, str.length() - 1) + str[0];
    return 0;
}