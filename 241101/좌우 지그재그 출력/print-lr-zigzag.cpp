#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    // 내 풀이
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i % 2 == 0) {
    //             cout << ++cnt << " ";
                
    //         } else {
    //             cout << cnt-- << " ";
    //         }
    //     }
    //     cnt += n;
    //     cout << endl;
    // }

    // 해설 풀이
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0)
                cout << (i * n) + j + 1 << " ";
            else
                cout << (i * n) + n - j << " ";
        }
        cout << endl;
    }
    return 0;
}