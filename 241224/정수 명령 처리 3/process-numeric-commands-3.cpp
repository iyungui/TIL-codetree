#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> dq;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int num;
        if(a == "push_front") {
            cin >> num;

            dq.push_front(num);
        } else if(a == "push_back") {
            cin >> num;
            dq.push_back(num);
        } else if(a == "pop_front") {
            cout << dq.front();
            dq.pop_front();
            cout << endl;
        } else if(a == "pop_back") {
            cout << dq.back();
            dq.pop_back();
            cout << endl;
        } else if(a == "size") {
            cout << dq.size();
            cout << endl;
        } else if(a == "empty") {
            dq.empty() ? cout << 1 : cout << 0;
            cout << endl;
        } else if(a == "front") {
            cout << dq.front() << endl;
        } else if(a == "back") {
            cout << dq.back() << endl;
        }
    }
    return 0;
}