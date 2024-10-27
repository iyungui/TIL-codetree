#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    int sum = 0, cnt = 0;
    while (true) {
        cin >> age;
        if (age < 20 || age >= 30) {
            break;
        }
        cnt++;
        sum += age;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum / cnt;
    return 0;
}