#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_X 200
#define OFFSET 100

int n;
int x1, x2;
int countings[MAX_X + 1];   // 0 부터 ~ 200 까지

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> x2;

        x1 += OFFSET, x2 += OFFSET;

        for(int j = x1; j < x2; j++)
            countings[j]++;
    }

    int ans = 0;
    for(int i = 0; i <= MAX_X; i++) {
        ans = max(ans, countings[i]);
    }

    cout << ans;
    return 0;
}