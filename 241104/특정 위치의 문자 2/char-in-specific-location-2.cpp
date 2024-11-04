#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 10; i++) {
        char x;
        cin >> x;
        if (i == 1 || i == 4 || i == 7) cout << x << " "; 
    }
    return 0;
}