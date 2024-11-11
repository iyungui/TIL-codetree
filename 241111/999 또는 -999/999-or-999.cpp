#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int arr[100];
    int i = 0;
    while (true) {
        cin >> arr[i];
        if (arr[i] == -999 || arr[i] == 999) {
            break;
        }
        i++;
    }
    for (int j = 0; j < i; j++) {
        if (min_val > arr[j]) min_val = arr[j];
        if (max_val < arr[j]) max_val = arr[j];
    }
    cout << max_val << " " << min_val;
    
    return 0;
}