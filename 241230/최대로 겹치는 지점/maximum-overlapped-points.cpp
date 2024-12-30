#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int n;
int countings[MAX_N];
int x[MAX_N], x2[MAX_N];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> x2[i];
    
    for(int i = 0; i < n; i++) {
        for(int j = x[i]; j <= x2[i]; j++) {
            countings[j]++;
        }
    }

    int max_cnt = 0;
    for(int i = 1; i <= MAX_N; i++) {
        max_cnt = max(max_cnt, countings[i]);
    }
    cout << max_cnt;
    return 0;
}