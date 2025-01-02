#include <iostream>
using namespace std;

#define MAX_T 1000000

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];     // 1 based indexing
int total_t = 0;

int main() {
    // 시작 위치
    pos_a[0] = 0;
    pos_b[0] = 0;
    
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for(int j = total_t + 1; j <= total_t + t; j++) {
            if(d == 'L') pos_a[j] = pos_a[j - 1] - 1;
            else if(d == 'R') pos_a[j] = pos_a[j - 1] + 1;
        }
        total_t += t;
    }
    total_t = 0;

    for(int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        for(int j = total_t + 1; j <= total_t + t; j++) {
            if(d == 'L') pos_b[j] = pos_b[j - 1] - 1;
            else if(d == 'R') pos_b[j] = pos_b[j - 1] + 1; 
        }
        total_t += t;
    }

    int ans = 0;
    for(int i = 1; i <= total_t; i++) {
        if(pos_a[i] == pos_b[i]) {
            ans = i;
            break;
        }
    }
    if(ans) cout << ans;
    else cout << -1;
    return 0;
}