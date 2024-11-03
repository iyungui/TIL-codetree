#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int sum = 0, cnt = 0;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (i == sum) cnt++;
        sum = 0;
    }
    cout << cnt;
    return 0;
}