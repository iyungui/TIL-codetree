#include <iostream>
using namespace std;

#define MAX_N 100

int n;
int countings[MAX_N + 1];
int arr[MAX_N + 1][2];

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    for(int i = 1; i <= n; i++) {
        int x = arr[i][0], y = arr[i][1];

        for(int j = x; j <= y; j++) countings[j]++;
    }

    int max_cnt = 0;
    for(int i = 1; i <= 100; i++) {
        if(countings[i] > max_cnt) max_cnt = countings[i];
    }
    cout << max_cnt;
    return 0;
}