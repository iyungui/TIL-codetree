#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < i; j++)
            cout << "* ";
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";
        cout << "* ";
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    return 0;
}