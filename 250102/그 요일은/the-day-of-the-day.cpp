#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int m1, d1, m2, d2;
string a;

int NumOfDays(int m, int d) {
    int total_days = 0;

    int months[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 1; i < m; i++) {
        total_days += months[i];
    }

    total_days += d;

    return total_days;
}

int GetCntDayOfWeek(int n) {
    int cnt = 0;

    // 요일 맵 초기화 (월요일부터 일요일까지)
    unordered_map<string, int> day_index = {
        {"Mon", 0}, {"Tue", 1}, {"Wed", 2}, {"Thu", 3},
        {"Fri", 4}, {"Sat", 5}, {"Sun", 6}
    };

    // 첫 주에서 목표 요일까지 며칠 남았는지
    int days_until_first = 7 - day_index[a];
    
    // 전체 등장 횟수 계산
    cnt = (n + days_until_first) / 7;

    // 마지막 주에 목표 요일이 포함되는 지 확인
    if((n + days_until_first) % 7 > 0) {
        cnt++;
    }

    return cnt;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;    
    cin >> a;

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    cout << GetCntDayOfWeek(diff);

    return 0;
}