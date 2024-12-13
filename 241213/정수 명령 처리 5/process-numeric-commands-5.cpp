#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num;
        string a;
        cin >> a;
        
        if(a == "push_back") {
            cin >> num;
            v.push_back(num);
        } else if(a == "pop_back") {
            v.pop_back();
        } else if(a == "get") {
            cin >> num;
            cout << v[num - 1] << endl;
        } else cout << v.size() << endl;
    }
    return 0;
}