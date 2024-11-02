#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char cnt = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << cnt++;
            if((int)(cnt) == (int)('Z') + 1) {
                cnt = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}