#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;
    int temp;
    int sum = 0;

    int arr[100] = {};
    int count_arr[100] = {};
    int i = 0;
    while (a > 1) {
        temp = a / b;
        arr[i] = a % b;
        count_arr[arr[i]]++;
        // cout << arr[i] << endl;
        a = temp;
        i++;
    }
    
    for (int j = 0; j <= i; j++) {
        if (count_arr[j] != 0) {
            sum += count_arr[j] * count_arr[j];
        }
    }
    cout << sum;
    return 0;
}