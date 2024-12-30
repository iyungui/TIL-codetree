#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

#define MAX_N 10

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];
    int min_val = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++)
            if(min_val > (abs(arr[i] - arr[j]))) min_val = abs(arr[i] - arr[j]); 
    }

    cout << min_val;
    return 0;
}