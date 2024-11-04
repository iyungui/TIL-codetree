#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum_one = 0;
    int sum_two = 0;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {   // 홀수 번째
            sum_one += arr[i];
        } else {
            sum_two += arr[i];
        }
    }
    if(sum_one > sum_two) cout << sum_one - sum_two;
    else cout << sum_two - sum_one;
    return 0;
}