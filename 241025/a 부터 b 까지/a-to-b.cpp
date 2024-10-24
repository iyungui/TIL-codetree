#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int i = a;
    while (i <= b) {

        cout << i << ' ';
        
        if (i % 2 == 1) {
            i *= 2;
        } else if (i % 2 == 0) {
            i += 3;
        }
        // if (i <= b) {
        //     break;
        // }
    }
    return 0;
}