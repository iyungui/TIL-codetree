#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    
    for (int i = 2; i <= 8; i += 2) {
        for (int j = b; j >= a; j--) {
            cout << j << " * " << i << " = " << i * j;
            if (j > a) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}