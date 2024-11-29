#include <iostream>
#include <string>
using namespace std;

// 입력 문자열 / 목적 문자열
string a, b;

int IsSubStr() {
    int a_idx = 0, b_idx = 0;
    for(int i = a_idx; i < a.length(); i++) {
        for(int j = b_idx; j < b.length(); j++) {
            if(a[i] == b[j]) {
                
                b_idx++;
                if(b_idx == b.length()) {
                    return i - b_idx + 1;  
                }
                break;
            } else {
                b_idx = 0;
                break;
            }
        }
    }
    // cout << a_idx << " " << b_idx << endl;
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b;

    cout << IsSubStr();

    return 0;
}