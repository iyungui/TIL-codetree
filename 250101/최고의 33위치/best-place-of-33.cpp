#include <iostream>
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
            int score = 0;
            for(int k = i; k <= i + 2; k++) {
                for(int l = j; l <= j + 2; l++) {
                    score += arr[k][l];
                }
            }
            ans = max(ans, score);
        }
    }

    cout << ans;
    
    return 0;
}