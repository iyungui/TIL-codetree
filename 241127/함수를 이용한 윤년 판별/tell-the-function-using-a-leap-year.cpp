#include <iostream>
using namespace std;

/* 내 코드
중첩 조건문, 바로 return이 안됨.
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
*/

// 해답 코드
bool IsLeapYear(int y) {
    if(y % 4 != 0) return false;

    if(y % 100 != 0) return true;

    if(y % 400 == 0) return true;

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