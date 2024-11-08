#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count_arr[101] = {};
    int arr[101];
    int x, i = 1;
    while (x != 0) {
        cin >> x;
        if (x != 0) {
            arr[i] = x / 10;
            count_arr[arr[i]]++;
        }
        i++;
    }
    for (int i = 1; i <= 9; i++) {
        cout << i << " - " << count_arr[i] << endl;
    }
    return 0;
}