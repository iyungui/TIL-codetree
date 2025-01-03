#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n, m;
map<int, int> pos_a, pos_b;  // time -> position

void record_moves(map<int, int>& positions, int moves) {
    int curr_time = 0;
    int curr_pos = 0;
    
    for(int i = 0; i < moves; i++) {
        int t;
        char d;
        cin >> t >> d;
        
        // 현재 시간부터 다음 움직임 시작 전까지의 위치 기록
        for(int j = curr_time + 1; j <= curr_time + t; j++) {
            curr_pos += (d == 'L' ? -1 : 1);
            positions[j] = curr_pos;
        }
        curr_time += t;
    }
    positions[0] = 0;  // 초기 위치
}

int main() {
    cin >> n >> m;
    
    record_moves(pos_a, n);
    record_moves(pos_b, m);
    
    // 마지막 시간 찾기
    int max_time = 0;
    for(auto& p : pos_a) max_time = max(max_time, p.first);
    for(auto& p : pos_b) max_time = max(max_time, p.first);
    
    int ans = 0;
    int prev_a = 0, prev_b = 0;
    
    for(int t = 1; t <= max_time; t++) {
        int curr_a = pos_a.count(t) ? pos_a[t] : prev_a;
        int curr_b = pos_b.count(t) ? pos_b[t] : prev_b;
        
        if(prev_a != prev_b && curr_a == curr_b) {
            ans++;
        }
        
        prev_a = curr_a;
        prev_b = curr_b;
    }
    
    cout << ans << "\n";
    return 0;
}