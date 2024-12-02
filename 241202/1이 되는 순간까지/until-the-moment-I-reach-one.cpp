#include <iostream>
using namespace std;
int cnt = 0;
int GetCnt(int n) {
    if(n == 1) return cnt;
    cnt++;
    if(n % 2 == 0) return GetCnt(n / 2);
    else return GetCnt(n / 3);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << GetCnt(n);
    return 0;
}