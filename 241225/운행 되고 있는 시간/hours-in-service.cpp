#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX_N 100
#define MAX_A 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[MAX_N], b[MAX_N];

    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int ans = INT_MIN;

    for(int i = 0; i < n; i++) {
        int countings[MAX_A] = {0};
        int cnt = 0;

        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            
            for(int k = a[j]; k < b[j]; k++) {
                countings[k] = 1;
            }
        }

        for(int j = 0; j < MAX_A; j++) {
            if(countings[j] == 1) cnt++;
        }

        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}