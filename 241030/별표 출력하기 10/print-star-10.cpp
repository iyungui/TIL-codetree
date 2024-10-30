#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt_even = 1;
    int cnt_odd = n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cnt_even; j++) {
                cout << "* ";
            }
            cnt_even++;
        } else {
            for (int j = 0; j < cnt_odd; j++) {
                cout << "* ";
            }
            cnt_odd--;
        }
        cout << endl;
    }
    
    cnt_even--;
    cnt_odd++;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cnt_even; j++) {
                cout << "* ";
            }
            cnt_even--;
        } else {
            for (int j = 0; j < cnt_odd; j++) {
                cout << "* ";
            }
            cnt_odd++;
        }
        cout << endl;
    }
    return 0;
}