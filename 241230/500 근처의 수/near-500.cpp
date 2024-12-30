#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for(int i = 0; i < 10; i++) cin >> arr[i];
    int max_val = INT_MIN, min_val = INT_MAX;
    for(int i = 0; i < 10; i++) {
        if(arr[i] < 500 && max_val < arr[i]) max_val = arr[i];
        else if(arr[i] > 500 && min_val > arr[i]) min_val = arr[i];
    }

    cout << max_val << " " << min_val;
    return 0;
}