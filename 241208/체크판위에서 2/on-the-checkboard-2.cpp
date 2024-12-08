#include <iostream>
using namespace std;
#define MAX_N 15

int main() {
    // 여기에 코드를 작성해주세요.
    int r, c;
    cin >> r >> c;
    string arr[MAX_N][MAX_N];
    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= c; j++)
            cin >> arr[i][j];
    int cnt = 0, ans = 0;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            for(int k = i + 1; k <= r - 2; k++) {
                for(int l = j + 1; l <= c - 2; l++) {
                    if(arr[i][j] != arr[k][j]) {
                        cnt++;
                        // cout << arr[k][j] << " " << endl;
                    }
                    if(cnt == 2)
                        ans = cnt;
                }
            }
        }
    }
    cout << ans;

    return 0;
}