#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_P 1000

int n, b;
int p[MAX_P];

int main() {
    cin >> n >> b;
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n);

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(b - p[i] > 0) {
            ans++;
            b -= p[i];
        } else if(b - p[i] <= 0) {
            if(b - (p[i] / 2) > 0) {
                ans++;
                b -= p[i];
            } else break;
        }
    }

    cout << ans;
    return 0;
}