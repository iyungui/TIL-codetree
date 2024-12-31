#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 20

int n;
int arr[MAX_N][MAX_N];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    int ans = 0;

    for(int i = 0; i <= n - 3; i++) {
        for(int j = 0; j <= n - 3; j++) {
            int sum = 0;

            for(int k = i; k < i + 3; k++) {
                for(int l = j; l < j + 3; l++) {
                    sum += arr[k][l];
                }
            }
            ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}