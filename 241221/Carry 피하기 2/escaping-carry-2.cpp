#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX_N 20

int n;
int arr[MAX_N];

bool IsCarry(int i, int j, int k) {
    int cnt = 0;
    string a = to_string(arr[i]), b = to_string(arr[j]), c = to_string(arr[k]);

    if(a.length() <= b.length()) cnt = a.length();
    else cnt = b.length();
    int l = 1;
    while(cnt) {
        int i = a[a.length() - l] - '0', j = b[b.length() - l] - '0';
        if(i + j >= 10) return false;
        cnt--;
        l++;
    }

    string d = to_string(arr[i] + arr[j]);

    if(d.length() <= c.length()) cnt = d.length();
    else cnt = c.length();
    l = 1;
    while(cnt) {
        int i = d[d.length() - l] - '0', j = c[c.length() - l] - '0';
        if(i + j >= 10) return false;
        cnt--;
        l++;
    }
    return true;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int max_sum = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(IsCarry(i, j, k))
                    max_sum = max(max_sum, arr[i] + arr[j] + arr[k]);
            }
        }
    }

    cout << max_sum;
    return 0;
}