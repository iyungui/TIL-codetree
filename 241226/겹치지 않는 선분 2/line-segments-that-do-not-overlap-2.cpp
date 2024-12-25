#include <iostream>
#include <climits>
using namespace std;

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int x1[MAX_N], x2[MAX_N];

    cin >> n;

    int min_x = INT_MAX, max_x = INT_MIN;

    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];

        min_x = min(min_x, x1[i]);
        max_x = max(max_x, x2[i]);
    }
        
    int countings[2000002] = {0};

    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j <= x2[i]; j++) {
            countings[j]++;
        }
    }

    int cnt = INT_MIN;
    for(int i = min_x; i <= max_x; i++) {
        cnt = max(cnt, countings[i]);
    }

    cout << n - cnt;
    return 0;
}