#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    // 내 풀이
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // main
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}