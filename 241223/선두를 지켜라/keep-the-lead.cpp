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
    bool prev_head = a_pos[1] > b_pos[1];    // 만약 true 이면 -> false 가 나오면 cnt 증가. 그 이후 다시 true 가 나오면 cnt 증가.. 반복
    
    // 즉, 이전 head 와 다르면. cnt 증가
    for(int i = 2; i <= total_t; i++) {
        // cout << "time: " << i << " " << a_pos[i] << ", " << b_pos[i] << endl;
        bool head = a_pos[i] > b_pos[i];

        if(prev_head != head) {
            cnt++;
            prev_head = head;
        }
    }
    cout << cnt;
    return 0;
}