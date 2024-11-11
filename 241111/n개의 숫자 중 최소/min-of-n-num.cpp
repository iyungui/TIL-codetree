#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100];
    int count_arr[101] = {};
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count_arr[arr[i]]++;
        
    }

    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (min_val > arr[i]) {
            min_val = arr[i];
            idx = i - 1;
        }
        // cout << "count_arr: " << count_arr[i] << endl;
    }
    // cout << idx;
    cout << min_val << " " << count_arr[idx];
    return 0;
}