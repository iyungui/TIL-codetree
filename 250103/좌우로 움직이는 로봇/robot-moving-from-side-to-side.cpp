#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_T 1000000

int n, m;
int a[MAX_T];
int b[MAX_T];
int x;

int a_total_t, b_total_t;

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;
        
        if(d == 'L') {
            while(t--) {
                a[a_total_t++] = x--;
            }
        } else if(d == 'R') {
            while(t--) {
                a[a_total_t++] = x++;
            }
        }
    }
    a[a_total_t] = x;
    // 위치 초기화
    x = 0;

    for(int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L') {
            while(t--) {
                b[b_total_t++] = x--;
            }
        } else if(d == 'R') {
            while(t--) {
                b[b_total_t++] = x++;
            }
        }
    }
    b[b_total_t] = x;
    int total_t;
    
    if(a_total_t < b_total_t) {
        total_t = b_total_t;
        int temp = a[a_total_t];
        for(int i = a_total_t; i <= total_t; i++) a[i] = temp;

    } else if(a_total_t > b_total_t) {
        total_t = a_total_t;
        int temp = b[b_total_t];
        for(int i = b_total_t; i <= total_t; i++) b[i] = temp;
    }

    int ans = 0;
    for(int i = 2; i <= total_t; i++) {
        if(a[i - 1] != b[i - 1] && a[i] == b[i]) {
            ans++;
        } 
    }
    cout << ans;
    return 0;
}