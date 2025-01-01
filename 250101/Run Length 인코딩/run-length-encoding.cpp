#include <iostream>
#include <string>
using namespace std;

string a;
string b;

int main() {
    cin >> a;

    int cnt = 1;
    int len = a.length();
    for(int i = 0; i < len; i++) {
        if(i == len - 1) {
            b += a[i];
            b += to_string(cnt);
            break;
        }

        if(a[i] == a[i + 1]) cnt++;
        else if(a[i] != a[i + 1]) {
            b += a[i];
            b += to_string(cnt);
            cnt = 1;
        }
    }

    cout << b.size() << endl;
    cout << b;
    return 0;
}