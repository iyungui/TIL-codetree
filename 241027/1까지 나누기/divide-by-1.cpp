#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0, i = 1;
    while(n > 1) {
        n /= i;
        i++;
        cnt++;
        if (n <= 1) {
            break;
        }
    }
    cout << cnt;

    return 0;
}