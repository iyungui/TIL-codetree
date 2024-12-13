#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        int a;
        if (str == "push_front") {
            cin >> a;
            s.push_front(a);
        } else if (str == "push_back") {
            cin >> a;
            s.push_back(a);
        } else if (str == "pop_front") {
            cout << s.front() << endl;
            s.pop_front();
        } else if (str == "pop_back") {
            cout << s.back() << endl;
            s.pop_back();
        } else if (str == "size") {
            cout << s.size() << endl;
        } else if (str == "empty") {
            if(s.empty()) cout << 1;
            else cout << 0;
            cout << endl;
        } else if (str == "front") {
            cout << s.front() << endl;
        } else if (str == "back") {
            cout << s.back() << endl;
        }
    }
    return 0;
}