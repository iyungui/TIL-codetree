#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int min_diff = INT_MAX;

    for(int i = 0; i < n; i++) {
        arr[i] *= 2;

        for(int j = 0; j < n; j++) {
            int remaining_arr[MAX_N -1] = {};
            int idx = 0;
            for(int k = 0; k < n; k++) {
                if(j != k) remaining_arr[idx++] = arr[k];
            }
            int sum_diff = 0;
            for(int k = 0; k < n - 2; k++) {
                sum_diff += abs(remaining_arr[k + 1] - remaining_arr[k]);
            }    
            min_diff = min(min_diff, sum_diff);               
        }
        
        arr[i] /= 2;
    }
    cout << min_diff;
    return 0;
}