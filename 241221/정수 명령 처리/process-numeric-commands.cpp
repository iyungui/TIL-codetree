#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> s;
int n;
string a;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> a;
        if(a == "push") {
            cin >> num;
            s.push(num);
        } else if(a == "pop") {
            cout << s.top() << endl;
            s.pop();
        } else if(a == "size") {
            cout << s.size() << endl;
        } else if(a == "empty") {
            s.empty() ? cout << 1 : cout << 0;
            cout << endl;
        } else if(a == "top") {
            cout << s.top() << endl;
        }
    }
    return 0;
}