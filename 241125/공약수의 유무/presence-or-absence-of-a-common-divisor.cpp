#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool found = false;
    for (int i = a; i <= b; ++i) {
        if (960 % i == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}