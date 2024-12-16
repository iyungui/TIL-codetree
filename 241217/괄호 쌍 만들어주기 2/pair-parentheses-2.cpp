#include <iostream>
#include <string>
using namespace std;

string a;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a;
    int n = a.length();

    int cnt = 0;
    for(int i = 0; i < n - 2; i++) {
        if(a[i] == '(' && a[i + 1] == '(') {
            for(int j = i + 2; j < n; j++) {
                if(a[j] == ')' && a[j + 1] == ')')
                    cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
}