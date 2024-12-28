#include <iostream>
using namespace std;

int x, y;
int counting[10];

int DigitNum(int n) {
    if(n < 10) {
        counting[n]++;
        return 1;
    }
    else {
        counting[n % 10]++;
        return DigitNum(n / 10) + 1;
    }
}

int main() {
    cin >> x >> y;
    int cnt = 0;

    for(int i = x; i <= y; i++) {

        for (int i = 0; i < 10; i++) {
            counting[i] = 0; // 각 요소를 0으로 초기화
        }

        int len = DigitNum(i);
        bool satisfiedN = false;
        bool satisfied1 = false;
        for(int j = 0; j <= 9; j++) {
            if(counting[j] == len - 1) satisfiedN = true;
            if(counting[j] == 1) satisfied1 = true;
        }
        if(satisfiedN && satisfied1) cnt++;
    }

    cout << cnt;
    return 0;
}