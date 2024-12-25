#include <iostream>
using namespace std;

bool IsLeapYear(int y) {
    if(y % 4 != 0) return false;

    if(y % 100 != 0) return true;

    if(y % 400 == 0) return true;

    return false;
}

bool IsExist(int m, int d, bool IsLeapYear) {
    for(int i = 0; i <= 12; i++) {
        for(int j = 0; j <= 31; j++) {
            if(j == 31 && (i == 4 || i == 6 || i == 9 || i == 11)) return false;

            if(i == m && j == d) return true; 

            if(IsLeapYear) {
                if(i == 2 && j == 29) break;
            } else {
                if(i == 2 && j == 28) break;
            }
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
            else return "Winter";
        } else {
            return "-1";
        }
    } else {
        if(IsExist(m, d, false)) {
            if(m >= 3 && m <= 5) return "Spring";
            else if (m >= 6 && m <= 8) return "Summer";
            else if (m >= 9 && m <= 11) return "Fall";
            else return "Winter";
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