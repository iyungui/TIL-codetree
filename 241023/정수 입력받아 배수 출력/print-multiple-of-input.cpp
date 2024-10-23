#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int count = 0;
    // for (int i = n; count < 5; i++) {
    //     if (i % n == 0) {
    //         cout << i << " ";
    //         count++;
    //     }
    // }

    for (int i = n; count < 5; i += n) {
        cout << i << " ";
        count++;
    }
    return 0;
}