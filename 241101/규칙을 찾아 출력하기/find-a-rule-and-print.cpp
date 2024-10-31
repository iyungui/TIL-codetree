#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    // 내 풀이
    // for (int i = 0; i < n; i++) {
    //     cout << "* ";
    // }
    // cout << endl;

    // for (int i = 1; i < n - 1; i++) {
    //     for (int j = 0; j < i; j++)
    //         cout << "* ";
    //     for (int j = 0; j < n - i - 1; j++)
    //         cout << "  ";
    //     cout << "* ";
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     cout << "* ";
    // }

    // 해설 풀이
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j || i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}