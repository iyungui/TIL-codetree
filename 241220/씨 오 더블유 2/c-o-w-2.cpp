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
            for(int j = i + 1; j < n; j++) {
                if(a[j] == 'O') {
                    for(int k = j + 1; k < n; k++) {
                        if(a[k] == 'W')
                            cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}