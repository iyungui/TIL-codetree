#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt_even = 1;  // 초기 별 개수 (홀수 번째 줄에서 사용할 값)
    int cnt_odd = n;   // 초기 별 개수 (짝수 번째 줄에서 사용할 값)

    // 위쪽 부분: 첫 번째 패턴
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // 짝수 번째 줄
            for (int j = 0; j < cnt_even; j++) {
                cout << "* ";
            }
            cnt_even++;
        } else {  // 홀수 번째 줄
            for (int j = 0; j < cnt_odd; j++) {
                cout << "* ";
            }
            cnt_odd--;
        }
        cout << endl;
    }

    // 아래쪽 부분: 두 번째 패턴
    cnt_even--;  // 위의 반복문 마지막 줄에서 cnt_even이 1 증가했으므로, 다시 줄여줌
    cnt_odd++;   // 위의 반복문 마지막 줄에서 cnt_odd가 1 감소했으므로, 다시 늘려줌

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // 짝수 번째 줄
            for (int j = 0; j < cnt_even; j++) {
                cout << "* ";
            }
            cnt_even--;
        } else {  // 홀수 번째 줄
            for (int j = 0; j < cnt_odd; j++) {
                cout << "* ";
            }
            cnt_odd++;
        }
        cout << endl;
    }

    return 0;
}