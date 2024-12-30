#include <iostream>
#include <climits>
using namespace std;

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int idx = n;

    int arr[MAX_N];

    for(int i = 0; i < n; i++) cin >> arr[i];

    while(idx > 0) {
        int max_val = INT_MIN;
        int temp;
        for(int i = 0; i < idx; i++) {
            if(max_val < arr[i]) {
                max_val = arr[i];
                temp = i;
            }
        }
        cout << temp + 1 << " ";
        idx = temp;
    }
    return 0;
}