#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> q;
int n;
string a;
int num;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a == "push") {
            cin >> num;
            q.push(num);
        } else if(a == "pop") {
            cout << q.front() << endl;
            q.pop();
        } else if(a == "size") {
            cout << q.size() << endl;
        } else if(a == "empty") {
            q.empty() ? cout << 1 : cout << 0;
            cout << endl;
        } else if(a == "front") {
            cout << q.front() << endl;
        }
    }
    return 0;
}