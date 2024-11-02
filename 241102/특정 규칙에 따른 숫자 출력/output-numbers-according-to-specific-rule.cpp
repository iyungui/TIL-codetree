#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    cin >> n;
    // 공백: i
    // 숫자: n - i 번
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--) {
            if (cnt >= 9) cnt = 1;
            else cnt++;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}