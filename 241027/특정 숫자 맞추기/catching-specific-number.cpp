#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    while(true) {
        cin >> n;
        if (n < 25) {
            cout << "Higher" << endl;
        } else if (n > 25) {
            cout << "Lower" << endl;
        } else if (n == 25) {
            cout << "Good";
            break;
        }
    }
    return 0;
}