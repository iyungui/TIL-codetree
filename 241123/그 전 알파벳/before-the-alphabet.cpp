#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin >> a;
    int prev_a;

    if (a == 'a') {
        prev_a = 'z';
    } else {
        prev_a = (int) a - 1;
    }
    cout << (char) prev_a;
    return 0;
}