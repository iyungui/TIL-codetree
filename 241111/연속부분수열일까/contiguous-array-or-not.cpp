#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a_arr[100], b_arr[100];
    
    for (int i = 0; i < n1; i++) {
        cin >> a_arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b_arr[i];
    }

    int idx = 0;
    int cnt = 0;
    bool isPart = false;

    for (int i = 0; i < n1; i++) {
        // if (idx == n2 - 1 && i < n1) idx = 0

        for (int j = idx; j < n2; j++) {
            if (a_arr[i] == b_arr[j]) {
                cnt++;
                idx = j + 1;
                break;
            } else {
                cnt = 0;
                idx = 0;
            }
        }
        if (cnt == n2) {
            isPart = true;
            break;
        }
    }
    if (isPart) cout << "Yes";
    else cout << "No";
    
    // bool isPart = false;
    // int idx = 0;
    // int cnt = 0;
    // for (int i = 0; i < n2; i++) {
    //     for (int j = idx; j < n1; j++) {
    //         if (a_arr[j] == b_arr[i]) {
    //             cnt++;
    //             idx = j + 1;
    //             // cout << "idx: " << idx << endl;
    //             break;
    //         }
    //         else cnt = 0;
    //     }
    //     cout << i << " cnt: " << cnt << endl;
    //     if (cnt == n2) isPart = true;
    // }
    // if (isPart) cout << "Yes";
    // else cout << "No";

    return 0;
}