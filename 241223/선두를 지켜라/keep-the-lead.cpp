#include <iostream>
using namespace std;

#define MAX_N 1000000

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int a_pos[MAX_N + 1], b_pos[MAX_N + 1];
    a_pos[0] = 0, b_pos[0] = 0;

    int total_t = 0;
    for(int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;
        for(int j = total_t + 1; j <= total_t + t; j++) {
            a_pos[j] = a_pos[j - 1] + v;
        }
        total_t += t;
    }
    total_t = 0;

    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;
        for(int j = total_t + 1; j <= total_t + t; j++) {
            b_pos[j] = b_pos[j - 1] + v;
        }
        total_t += t;
    }
    int cnt = 0;
    // bool prev_head;
    // int idx = 0;
    // for(int i = 1; i <= total_t; i++) {
    //     if(a_pos[i] > b_pos[i]) {
    //         prev_head = true;
    //         idx = i;
    //         break;
    //     } else if(a_pos[i] < b_pos[i]) {
    //         prev_head = false;
    //         idx = i;
    //         break;
    //     } else continue;
    // }
    // // 즉, 이전 head 와 다르면. cnt 증가
    // for(int i = idx; i <= total_t; i++) {
    //     // cout << "time: " << i << " " << a_pos[i] << ", " << b_pos[i] << endl;
    //     bool head = a_pos[i] > b_pos[i];

    //     if(prev_head != head) {
    //         cnt++;
    //         prev_head = head;
    //     }
    // }

    // A가 리더면 1, B가 리더면 2로 관리
    int leader = 0;
    for(int i = 1; i <= total_t; i++) {
        if(a_pos[i] > b_pos[i]) {
            if(leader == 2) cnt++;
            leader = 1;
        } else if(a_pos[i] < b_pos[i]) {
            if(leader == 1) cnt++;
            leader = 2;
        }
    }
    cout << cnt;
    return 0;
}