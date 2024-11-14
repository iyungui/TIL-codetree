#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string arr[10] = {};
    int sum = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i].length();
        if (arr[i][0] == 'a') cnt++;
    }

    cout << sum << " " << cnt;
    return 0;
}