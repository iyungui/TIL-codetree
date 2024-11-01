#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 11;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            cout << sum << " ";
            sum += 2;
        }
        for (int j = 0; j < n - 1; j++) {
            sum -= 2;
        }
        cout << endl;
    }
    return 0;
}