#include <iostream>
using namespace std;

#define MAX_T 1000000

int n, m;
int a[MAX_T + 1];
int b[MAX_T + 1];

int a_total_t = 1, b_total_t = 1;

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;
        
        if(d == 'L') {
            while(t--) {
                a[a_total_t] = a[a_total_t - 1] - 1;
                a_total_t++;
            }
        } else if(d == 'R') {
            while(t--) {
                a[a_total_t] = a[a_total_t - 1] + 1;
                a_total_t++;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L') {
            while(t--) {
                b[b_total_t] = b[b_total_t - 1] - 1;
                b_total_t++;
            }
        } else if(d == 'R') {
            while(t--) {
                b[b_total_t] = b[b_total_t - 1] + 1;
                b_total_t++;
            }
        }
    }

    int total_t;
    
    if(a_total_t < b_total_t) {
        total_t = b_total_t;
        for(int i = a_total_t; i <= total_t; i++) a[i] = a[i - 1];

    } else if(a_total_t > b_total_t) {
        total_t = a_total_t;
        for(int i = b_total_t; i <= total_t; i++) b[i] = b[i - 1];
    }

    int ans = 0;
    for(int i = 1; i < total_t; i++) {
        if(a[i] == b[i] && a[i - 1] != b[i - 1]) {
            ans++;
        } 
    }
    cout << ans;
    return 0;
}