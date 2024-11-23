#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0;
    cin >> n;
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++) {
        sum += (int)str[i] - '0';
    }
    cout << sum;
    return 0;
}