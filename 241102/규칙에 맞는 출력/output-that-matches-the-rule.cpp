#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    // j: i+1번 반복
    // j 는 n - i번 부터 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << n - i + j << " ";
        }
        cout << endl;
    }
    return 0;
}