#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if(i % j == 0) {
                if(j != i) continue;
                else cout << j << " ";
            }
        }
    }
    return 0;
}