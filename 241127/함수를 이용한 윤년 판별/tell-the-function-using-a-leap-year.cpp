#include <iostream>
using namespace std;

bool IsLeapYear(int y) {
    if(y % 4 == 0) {
        if(y % 100 == 0) {
            if(y % 400 == 0) return true;
            else if(y % 400 != 0) return false;
        }
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;

    if (IsLeapYear(y)) cout << "true";
    else cout << "false";
    return 0;
}