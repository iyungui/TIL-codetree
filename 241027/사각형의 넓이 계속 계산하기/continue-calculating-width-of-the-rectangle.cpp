#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c;
    
    while(true) {
        cin >> a >> b;
        cin >> c;
        cout << a * b << endl;
        if (c == 'C') {
            break;
        }
    }
    return 0;
}