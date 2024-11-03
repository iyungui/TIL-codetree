#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int cnt = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        while(true) {
            if(n == 1) break;
            if(n % 2 == 0) n /= 2;
            else {
                n *= 3;
                n += 1;
            }
            cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}