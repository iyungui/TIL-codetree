#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string arr[20];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char str;
    cin >> str;

    int cnt = 0;
    int str_length = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[i].length(); j++) {
            if (str == arr[i][j]) {
                cnt++;
                str_length += arr[i].length();
                break;
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)str_length / cnt;
    return 0;
}