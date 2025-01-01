#include <iostream>
using namespace std;

string a;   // 입력 문자열
string b;   // 목적 문자열

int GetStartIdx() {
    // 존재하지 않는다면 -1
    int idx = -1;
    for(int i = 0; i < a.length() - b.length() + 1; i++) {
        if(a.substr(i, b.length()) == b) {
            idx = i;
            break;
        }
    } 

    return idx;
}

int main() {
    cin >> a >> b;

    int start_idx = GetStartIdx();

    cout << start_idx;
    return 0;
}