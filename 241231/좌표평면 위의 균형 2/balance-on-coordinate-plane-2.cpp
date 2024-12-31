#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 100

int n;
int x[MAX_N], y[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = INT_MAX;

    for(int i = 2; i <= 100; i += 2) {
        for(int j = 2; j <= 100; j += 2) {
            int cnt_a = 0, cnt_b = 0, cnt_c = 0, cnt_d = 0;
            
            for(int k = 0; k < n; k++) {
                if(x[k] < i && y[k] > j) cnt_a++;
                else if(x[k] > i && y[k] > j) cnt_b++;
                else if(x[k] < i && y[k] < j) cnt_c++;
                else if(x[k] > i && y[k] < j) cnt_d++;
            }
            int current_max = max({cnt_a, cnt_b, cnt_c, cnt_d});
            ans = min(ans, current_max);
        }
    }

    cout << ans;

    return 0;
}