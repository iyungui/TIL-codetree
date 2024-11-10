// #include <iostream>
// using namespace std;

// int main() {
//     // 여기에 코드를 작성해주세요.
//     int n1, n2;
//     cin >> n1 >> n2;
//     int a_arr[100], b_arr[100];
    
//     for (int i = 0; i < n1; i++) {
//         cin >> a_arr[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         cin >> b_arr[i];
//     }

//     int idx = 0;
//     int cnt = 0;
//     bool isPart = false;

//     for (int i = 0; i < n1; i++) {

//         for (int j = idx; j < n2; j++) {
//             if (a_arr[i] == b_arr[j]) {
//                 cnt++;
//                 idx = j + 1;
//                 cout << "idx: " << idx << endl;
//                 break;
//             } else {
//                 cnt = 0;
//                 idx = 0;
//             }
//         }
//         cout << i << " cnt: " << cnt << endl;

//         if (cnt == n2) {
//             isPart = true;
//             break;
//         }
//     }
//     if (isPart) cout << "Yes";
//     else cout << "No";
    
//     // bool isPart = false;
//     // int idx = 0;
//     // int cnt = 0;
//     // for (int i = 0; i < n2; i++) {
//     //     for (int j = idx; j < n1; j++) {
//     //         if (a_arr[j] == b_arr[i]) {
//     //             cnt++;
//     //             idx = j + 1;
//     //             // cout << "idx: " << idx << endl;
//     //             break;
//     //         }
//     //         else cnt = 0;
//     //     }
//     //     cout << i << " cnt: " << cnt << endl;
//     //     if (cnt == n2) isPart = true;
//     // }
//     // if (isPart) cout << "Yes";
//     // else cout << "No";

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a_arr[100], b_arr[100];
    
    for (int i = 0; i < n1; i++) {
        cin >> a_arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b_arr[i];
    }

    bool isPart = false;

    // 수열 A에서 길이 n2의 연속 부분을 찾아 B와 비교
    for (int i = 0; i <= n1 - n2; i++) {  // n1 - n2까지만 탐색
        bool match = true;
        for (int j = 0; j < n2; j++) {
            if (a_arr[i + j] != b_arr[j]) {  // 연속된 부분을 비교
                match = false;
                break;
            }
        }
        if (match) {  // B가 A의 연속 부분 수열이면
            isPart = true;
            break;
        }
    }

    if (isPart) cout << "Yes";
    else cout << "No";

    return 0;
}