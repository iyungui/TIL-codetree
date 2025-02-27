#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int y) {
    if(y % 4 != 0) return false;

    if(y % 100 != 0) return true;

    if(y % 400 == 0) return true;

    return false;
}

bool IsExist(int m, int d, bool IsLeapYear) {

    if((m == 4 || m == 6 || m == 9 || m == 11) && d == 31) return false;
    if(IsLeapYear && m == 2 && d > 29) return false;
    if(!IsLeapYear && m == 2 && d > 28) return false;

    for(int i = 0; i <= 12; i++) {
        for(int j = 0; j <= 31; j++) {
            if(i == m && j == d) return true; 
        }
    }
    return false;
}

string IsSeason(int y, int m, int d) {
    if(IsLeapYear(y)) {
        if(IsExist(m, d, true)) {
            if(m >= 3 && m <= 5) return "Spring";
            else if (m >= 6 && m <= 8) return "Summer";
            else if (m >= 9 && m <= 11) return "Fall";
            else if (m == 12 || m >= 1 && m <= 2) return "Winter";
            else return "-1";
        } else {
            return "-1";
        }
    } else {
        if(IsExist(m, d, false)) {
            if(m >= 3 && m <= 5) return "Spring";
            else if (m >= 6 && m <= 8) return "Summer";
            else if (m >= 9 && m <= 11) return "Fall";
            else if (m == 12 || m >= 1 && m <= 2) return "Winter";
            else return "-1";
        } else {
            return "-1";
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;
    cin >> y >> m >> d;
    cout << IsSeason(y, m, d);
    return 0;
}