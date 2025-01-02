#include <iostream>
#include <string>
using namespace std;

int NumOfDays(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for(int i = 0; i < m; i++)
        total_days += days[i];
    
    total_days += d;

    return total_days;
}

int main() {
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    while(diff < 0) diff += 7;

    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << day_of_week[diff % 7];
    return 0;
}