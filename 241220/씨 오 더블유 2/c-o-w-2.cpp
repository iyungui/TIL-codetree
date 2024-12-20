#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int n;
    string a;

    cin >> n >> a;

    for(int i = 0; i < n; i++) {
        if(a[i] == 'C') {
            for(int j = i; j < n - i; j++) {
                if(a[j] == 'O') {
                    for(int k = j; k < n - j; k++) cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}