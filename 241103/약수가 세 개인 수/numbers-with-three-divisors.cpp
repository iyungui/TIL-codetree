#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int answer = 0, start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if(i % j == 0) cnt++;
        }
        if(cnt == 3) answer++;
    }
    cout << answer;
    return 0;
}