#include <bits/stdc++.h>
using namespace std;

int n, m, ret, a[104], temp;
string s;


int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        s += (char)temp + '0';
    }
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a, a + m);

    do {
        string b;
        for(int i = 0; i < m; i++) {
            b += (char)a[i] + '0';
        }
        if(s.find(b) != string::npos) ret++;

    } while(next_permutation(a, a + m));

    cout << ret << '\n';
    return 0;
}