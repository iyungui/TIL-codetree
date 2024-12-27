#include <iostream>
using namespace std;

#define MAX_K 10
#define MAX_N 20

int k, n;
int arr[MAX_K + 1][MAX_N + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;

    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= n; j++) cin >> arr[i][j];
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        int counting_arr[MAX_N + 1] = {0};
        int idx;
        for(int j = 1; j <= k; j++) {

            for(int l = 1; l <= n; l++)
                if(arr[j][l] == i) idx = l;

            for(int l = idx + 1; l <= n; l++) {
                counting_arr[arr[j][l]]++;
            }
        }

        for(int j = 1; j <= n; j++) {
            if(counting_arr[j] == k) cnt++;
        }
    }

    cout << cnt;

    return 0;
}