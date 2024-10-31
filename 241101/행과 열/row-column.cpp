#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int x = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < b; j++) {
            x += i;
            cout << x << " ";
        }
        x = 0;
        cout << endl;
    }
    return 0;
}