#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i].length();
    }
    cout << sum;
    return 0;
}