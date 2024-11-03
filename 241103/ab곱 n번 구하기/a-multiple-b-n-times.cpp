#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a, b, prod = 1;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            prod *= j;
        }

        cout << prod << endl;
        prod = 1;
    }
    return 0;
}