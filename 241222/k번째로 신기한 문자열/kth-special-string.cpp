#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_N 100

int n, k;
string t;
string arr[MAX_N];

int main() {
    cin >> n >> k >> t;
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);
    // for(int i = 0; i < n; i++) cout << arr[i] << endl;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        bool satisfied = true;
        for(int j = 0; j < t.length(); j++) {
            if(arr[i][j] != t[j]) {
                satisfied = false;
                break;
            }
        }
        if(satisfied) {
            cnt++;
        }
        if(satisfied && cnt == 3) cout << arr[i];
    }
    return 0;
}