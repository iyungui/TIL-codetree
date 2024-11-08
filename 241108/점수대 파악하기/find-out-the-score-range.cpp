#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, i = 0;
    int count_arr[101] = {};
    int arr[101];

    while (x != 0) {
        cin >> x;
        if (x != 0) {
            arr[i] = x / 10;
            count_arr[arr[i]]++;
        }
        i++;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << (10 - i) * 10 << " - " << count_arr[10 - i] << endl;
    }

    return 0;
}