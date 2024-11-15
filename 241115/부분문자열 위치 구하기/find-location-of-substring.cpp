#include <iostream>
#include <string>
using namespace std;

// int main() {
//     // 여기에 코드를 작성해주세요.
//     string a, b;
//     cin >> a >> b;

//     int start_idx = -1;

//     for (int i = 0; i < a.length(); i++) {
//         if (a.substr(i, b.length()) == b) {
//             start_idx = i;
//             break;
//         }
//     }
//     cout << start_idx;
//     return 0;
// }

string input_str, target_str;
int main() {
    cin >> input_str >> target_str;
    int input_len = input_str.size();
    int target_len = target_str.size();
    for (int i = 0; i < input_len; i++) {
        if (i + target_len - 1 >= input_len) continue;

        bool is_matched = true;

        for (int j = 0; j < target_len; j++) {
            if (input_str[i + j] != target_str[j]) is_matched = false;
        }

        if (is_matched) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}