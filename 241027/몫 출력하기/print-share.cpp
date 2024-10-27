#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int i = 0, a;
    while(true) {
        cin >> a;
        if (a % 2 == 1) {
            continue;
        } else if (a % 2 == 0) {
            i++;
            cout << a / 2 << endl;
        }
        if (i >= 3) {
            break;
        }
    }
    return 0;
}