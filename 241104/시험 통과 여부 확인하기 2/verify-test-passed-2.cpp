#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int answer = 0, sum = 0;
    int n;
    int arr[4];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum / 4 >= 60) {
            cout << "pass";
            answer++;
        } else cout << "fail";
        cout << endl;
        sum = 0;
    }
    cout << answer;
    return 0;
}