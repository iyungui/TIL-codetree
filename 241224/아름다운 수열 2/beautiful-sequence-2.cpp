#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int n, m;
int a_arr[MAX_N];
int b_arr[MAX_N];

int CntBeautifulSeq(int a, int b, int c) {
    int cnt = 0;
    // do {
    //     for (int num : b_arr) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // } while (next_permutation(b_arr.begin(), b_arr.end()));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(j == i) continue;
            for(int k = 0; k < m; k++) {
                if(k == i || k == j) continue;
                // if(i != j && j != k && i != k) {
                    // if(a_arr[a] == b_arr[i] && a_arr[b] == b_arr[j] && a_arr[c] == b_arr[k]) cnt++;
                    cout << b_arr[i] << " " << b_arr[j] << " " << b_arr[k] << endl;
                // }
            }
        }
    }

    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요. 
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a_arr[i];
    for(int i = 0; i < m; i++) cin >> b_arr[i];

    sort(b_arr, b_arr + m);

    int ans = 0;
    for(int i = 0; i < n - m - 1; i++) {
        ans += CntBeautifulSeq(i, i + 1, i + 2);
    }
    // cout << ans;
    return 0;
}