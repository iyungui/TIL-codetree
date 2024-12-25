#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    int n;
    int x[MAX_N], y[MAX_N];

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    int size = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if( (x[i] - x[j] == 0 || x[i] - x[k] == 0 || x[j] - x[k] == 0) && (y[i] - y[j] == 0 || y[i] - y[k] == 0 || y[j] - y[k] == 0) ) {
                    size = abs((x[i]*y[j] + x[j]*y[k] + x[k]*y[i]) - (x[j]*y[i] + x[k]*y[j] + x[i]*y[k]));
                    size /= 2;

                    ans = max(ans, size);
                }
            }
        }
    }
    cout << ans * 2;
    return 0;
}