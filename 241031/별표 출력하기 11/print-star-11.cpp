#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n + 1; i++) {
            if (i % 2 == 0) {
                for (int k = 0; k < 2 * n + 1; k++)
                    cout << "* ";
                cout << endl;
            } else {
                for (int k = 0; k < 2 * n + 1; k += 2) {
                    cout << "* ";
                    cout << "  ";
                }
                cout << endl;
            }
    }
    return 0;
}