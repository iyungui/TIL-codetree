#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '(') {
            for(int j = i; j < a.length(); j++) {
                if(a[j] == ')')
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}