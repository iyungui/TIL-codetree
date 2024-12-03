#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// bool IsEqual(string a, string b) {
//     if(a.length() != b.length()) return false;
//     for(int i = 0; i < a.length(); i++)
//         if(a[i] != b[i]) return false;
//     return true;
// }

// int main() {
//     // 여기에 코드를 작성해주세요.
//     string a, b;
//     cin >> a >> b;
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     bool satisfied = IsEqual(a, b);
//     if(satisfied) cout << "Yes";
//     else cout << "No";
//     return 0;
// }

// ANSWER 1
// int main() {
//     string a, b;
//     cin >> a >> b;
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     if(a.compare(b) == 0) cout << "Yes";
//     else cout << "No";
//     return 0;
// }

// ANSWER 2
#define ASCII_NUM 128

int main() {
    string a, b;
    int count[ASCII_NUM];
    cin >> a >> b;
    for(int i = 0; i < ASCII_NUM; i++)
        count[i] = 0;
    for(int i = 0; i < a.size(); i++)
        count[a[i]]++;
    for(int i = 0; i < b.size(); i++)
        count[b[i]]--;
    for(int i = 0; i < ASCII_NUM; i++)
        if(count[i] != 0) {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
