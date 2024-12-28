#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 1000

int n;
int c, g, h;
int ta[MAX_N], tb[MAX_N];

int main() {
    cin >> n >> c >> g >> h;
    int max_temp = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> ta[i] >> tb[i];

        if(max_temp < ta[i]) max_temp = ta[i];
    }

    int ans = INT_MIN;

    for(int i = 0; i <= max_temp + 1; i++) {
        int sum = 0;

        for(int j = 0; j < n; j++) {
            if(i < ta[j]) sum += c;
            else if(i >= ta[j] && i <= tb[j]) sum += g;
            else if(i > tb[j]) sum += h;
        }
        ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}