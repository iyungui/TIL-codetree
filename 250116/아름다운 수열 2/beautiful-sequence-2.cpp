#include <bits/stdc++.h>
using namespace std;

int n, m, ret;
vector<int> b;

bool check(vector<int>& window) {
    vector<int> temp = b;
    do {
        if(window == temp) return true;
    } while(next_permutation(temp.begin(), temp.end()));
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    b.resize(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end()); // next_permutation을 위해 정렬 필수!
    
    for(int i = 0; i <= n - m; i++) {
        vector<int> window(a.begin() + i, a.begin() + i + m);
        if(check(window)) ret++;
    }
    
    cout << ret << "\n";
    return 0;
}