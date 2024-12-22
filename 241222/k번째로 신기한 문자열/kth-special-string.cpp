#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_N 100

int n, k;
string t;
string arr[MAX_N];
string t_arr[MAX_N];

int main() {
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);  // 사전순 정렬

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].substr(0, t.length()) == t) {
            t_arr[cnt++] = arr[i];
        }
    }
    cout << t_arr[k - 1] << endl;

    return 0;
}