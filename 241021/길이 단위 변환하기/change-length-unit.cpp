#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft = 9.2, mi = 1.3;
    cout << fixed;
    cout.precision(1);
    cout << ft << "ft = " << ft * 30.48 << "cm" << endl;
    cout << mi << "mi = " << mi * 160934 << "cm" << endl;
    return 0;
}