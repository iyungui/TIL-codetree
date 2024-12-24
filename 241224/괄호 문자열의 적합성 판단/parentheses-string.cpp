#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    stack<char> s;

    bool satisfied = true;

    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '(') {
            s.push('(');
        } else {
            if(s.empty()) {
                satisfied = false;
                break;
            }
            s.pop();
        }
    }
    if(s.empty() == false) satisfied = false;
    
    if(satisfied) cout << "Yes";
    else cout << "No";
    
    return 0;
}