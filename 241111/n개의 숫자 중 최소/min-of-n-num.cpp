#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[101] = {};
    int count_arr[101] = {};
    int min_val = INT_MAX;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        count_arr[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (min_val > arr[i]) {
            min_val = arr[i];
        }
        // cout << "count_arr: " << count_arr[i] << endl;
    }
    cout << min_val << " " << count_arr[min_val];
    return 0;
}