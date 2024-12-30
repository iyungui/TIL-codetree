#include <iostream>
#include <string>

using namespace std;

string a;

int main() {
    cin >> a;
    int cnt = 1;
    int len = 0;

    string new_a;

    for(int i = 1; i < a.length(); i++) {
        if(a[i - 1] == a[i]) {
            cnt++;
        } else if (a[i - 1] != a[i]) {
            new_a += a[i - 1];
            char after = cnt + '0';
            new_a += after;
            cnt = 1;
            len += 2;
        }

        if(i == a.length() - 1 && cnt >= 2) {
            // cout << a[i - 1] << cnt;
            new_a += a[i - 1];
            char after = cnt + '0';
            new_a += after;

            len += 2;
        } else if (i == a.length() - 1 && cnt == 1) {
            new_a += a[i];
            char after = cnt + '0';
            new_a += after;
            len += 2;
        }
    }

    cout << len << endl;

    for(int i = 0; i < len; i++) {
        cout << new_a[i];
    }

    return 0;
}