#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) sum += j;
        }
        cout << sum << endl;
    }

    return 0;
}