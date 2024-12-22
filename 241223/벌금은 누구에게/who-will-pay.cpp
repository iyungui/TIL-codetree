#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 10000

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;
    cin >> n >> m >> k;
    int cnt_arr[MAX_M + 1];
    int students[MAX_N + 1] = {0};

    for(int i = 1; i <= m; i++) cin >> cnt_arr[i];

    int ans = 0;

    for(int i = 1; i <= m; i++) {
        students[cnt_arr[i]]++;
        if(students[cnt_arr[i]] == k) {
            ans = cnt_arr[i];
            break;
        }
    }
    if(ans) cout << ans;
    else cout << -1;
    return 0;
}