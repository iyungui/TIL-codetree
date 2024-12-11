#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N + 1][2];

    for(int i = 1; i <= n; i++)
        cin >> arr[i][0] >> arr[i][1];
    
    int min_size = INT_MAX;
    
    for(int i = 1; i <= n; i++) {
        int min_x = INT_MAX;
        int min_y = INT_MAX;
        int max_x = INT_MIN;
        int max_y = INT_MIN;
        
        for(int j = 1; j <= n; j++) {
            // int counting[]
            if(i == j) continue;

            int x = arr[j][0], y = arr[j][1];

            min_x = min(min_x, x);
            min_y = min(min_y, y);
            max_x = max(max_x, x);
            max_y = max(max_y, y);
        }
        int height = max_y - min_y;
        int width = max_x - min_x;

        min_size = min(min_size, height * width);
        
    }
    cout << min_size;
    return 0;
}