#include <iostream>
using namespace std;

int a, b, c;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c;

    int ans = 0, sum = 0;
    
    for(int i = 0; i <= 1000; i++) {
        for(int j = 0; j <= 1000; j++) {
            sum = (a * i) + (b * j);
            if(sum <= c) ans = max(ans, sum);
        }
    }
    cout << ans;

    return 0;
}