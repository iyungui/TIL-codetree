#include <iostream>
using namespace std;

int x, y;

int DigitSum(int n) {
    if(n < 10) return n;

    return DigitSum(n / 10) + (n % 10);
}

int main() {
    cin >> x >> y;
    int ans = 0;
    
    // for(int i = x; i <= y; i++) {

    //     int d1 = i % 10;
    //     int d2 = (i / 10) % 10;
    //     int d3 = (i / 100) % 10;
    //     int d4 = (i / 1000) % 10;

    //     ans = max(ans, d1 + d2 + d3 + d4);
    // }

    for(int i = x; i <= y; i++) {
        ans = max(ans, DigitSum(i));
    }
    cout << ans;
    return 0;
}