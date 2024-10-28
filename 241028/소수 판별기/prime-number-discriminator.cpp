#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    bool satisfied = true;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            satisfied = false;
        }
    }
    if(satisfied)
        cout << 'P';
    else
        cout << 'C';
    return 0;
}