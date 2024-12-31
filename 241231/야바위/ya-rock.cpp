#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100
int n;
int arr[MAX_N][3];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    
    int ans = 0;

    for(int i = 0; i < 3; i++) {
        int score = 0;

        for(int j = 0; i < n; i++) {
            // 조약돌이 있는 컵
            // arr[j][i];

            if(arr[j][2] == arr[j][i]) score++;

        }

        ans = max(ans, score);
    }
    cout << ans;
    return 0;
}