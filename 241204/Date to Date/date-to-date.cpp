#include <iostream>
using namespace std;

int NumOfDays(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    for(int i = 1; i < m; i++)
        totalDays += days[i];
    totalDays += d;
    return totalDays;
}

int main() {
    // 여기에 코드를 작성해주세요.
    // (1.1 ~ m2.d2) - (1.1 ~ m1.d1)
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    // int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // int totalDays = 0;
    // int cnt = 1;
    // while(cnt < m2) {
    //     if(m2 == 1) break;
    //     totalDays += num_of_days[cnt];
    //     cnt++;
    // }
    // totalDays += d2;

    // int firstDays = 0;
    // cnt = 1;
    // while(cnt < m1) {
    //     if(m1 == 1) break;
    //     firstDays += num_of_days[cnt];
    //     cnt++;
    // }
    // firstDays += d1;

    // cout << totalDays - firstDays + 1;
    cout << NumOfDays(m2, d2) - NumOfDays(m1, d1) + 1;

    return 0;
}