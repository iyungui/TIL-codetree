#include <bits/stdc++.h>
using namespace std;

int n, m, ret;
vector<int> a, b;

bool check_permutation(vector<int>& window, vector<int>& target) {
    vector<int> temp = window;
    sort(temp.begin(), temp.end());
    return temp == target;
}

int main() {
    cin >> n >> m;
    
    // 수열 A 입력
    int temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    
    // 수열 B 입력
    for(int i = 0; i < m; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    
    // 수열 B 정렬 (비교를 위해)
    sort(b.begin(), b.end());
    
    // 슬라이딩 윈도우로 확인
    for(int i = 0; i <= n - m; i++) {
        vector<int> window(a.begin() + i, a.begin() + i + m);
        if(check_permutation(window, b)) ret++;
    }
    
    cout << ret << '\n';
    return 0;
}