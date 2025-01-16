#include <bits/stdc++.h>
using namespace std;

int n, m, ret; 
vector<int> a, sub_a, b;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    
    // 수열 A 입력
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    
    // 수열 B 입력
    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end()); // next_permutation 사용을 위한 정렬
    
    // 각 연속 부분수열 체크
    for(int i = 0; i <= n - m; i++) {
        sub_a = vector<int>(a.begin() + i, a.begin() + i + m);
        sort(sub_a.begin(), sub_a.end());
        
        if(sub_a == b) ret++;
        while(next_permutation(b.begin(), b.end())){
            if(sub_a == b) ret++;
        }
        sort(b.begin(), b.end()); // b 다시 정렬
    }
    
    cout << ret << '\n';
    return 0;
}