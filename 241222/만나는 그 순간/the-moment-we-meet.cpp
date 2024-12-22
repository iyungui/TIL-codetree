#include <iostream>
using namespace std;

#define MAX_T 10000

int n, m;
int a[MAX_T + 1], b[MAX_T + 1];

int main() {
    int total_t = 0;
    cin >> n >> m;
    a[0] = 0;
    b[0] = 0;

    for(int i = 1; i <= n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for(int j = total_t + 1; j <= total_t + t; j++) {
            if(d == 'L') a[j] = a[j - 1] - 1;
            else if(d == 'R') a[j] = a[j - 1] + 1;
        }
        total_t += t;
    }
    total_t = 0;
    for(int i = 1; i <= m; i++) {
        char d;
        int t;
        cin >> d >> t;
        
        for(int j = total_t + 1; j <= total_t + t; j++) {
            if(d == 'L') b[j] = b[j - 1] - 1;
            else if(d == 'R') b[j] = b[j - 1] + 1;
        }
        total_t += t;
    }
    
    int ans = 0;
    for(int i = 1; i <= total_t; i++) {
        if(a[i] == b[i]) {
            ans = i;
            break;
        }
    }
    if(ans) cout << ans;
    else cout << -1;

    return 0;
}