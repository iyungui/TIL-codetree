#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10];
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n; i++) {
        temp = arr[i] - arr[i + 1];
        if (temp < 0) {
            temp *= -1;
        }
        if (min_val > temp) min_val = temp;
    }
    cout << min_val;
    return 0;
}