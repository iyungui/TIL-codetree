#include <iostream>
#include <climits>
#include <cstdlib>
#define MAX_N 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N][2];
    for(int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    int min_distance = INT_MAX;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int x1 = arr[i][0];
            int y1 = arr[i][1];
            int x2 = arr[j][0];
            int y2 = arr[j][1];
            if(min_distance > abs(x1 - x2) + abs(y1 - y2)) {
                ans = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
                min_distance = abs(x1 - x2) + abs(y1 - y2);
            }
        }
    }
    cout << ans;
    return 0;
}