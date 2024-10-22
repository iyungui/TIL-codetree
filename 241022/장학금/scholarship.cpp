#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mid_exam, final_exam;
    cin >> mid_exam >> final_exam;

    if (mid_exam >= 90) {
        if (final_exam >= 95) {
            cout << 100000;
        } else if (final_exam >= 90) {
            cout << 50000;
        }
    } else {
        cout << 0;
    }
    return 0;
}