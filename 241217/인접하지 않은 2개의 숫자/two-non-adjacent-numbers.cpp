#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX_N 100

int arr[MAX_N];
int n;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int max_sum = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(abs(i - j) > 1) {
                int sum = arr[i] + arr[j];
                max_sum = max(max_sum, sum);
            }
        }
    }
    cout << max_sum;
    return 0;
}