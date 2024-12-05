#include <iostream>
using namespace std;
#define MAX_VAL 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_VAL * 2 + 1] = {};
    int line_x1[MAX_VAL + 1] = {};
    int line_x2[MAX_VAL + 1] = {};
    int offset = 100;
    
    for(int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        if(x1 < 0 && x1 < offset) {
            offset = x1;
        }
        line_x1[i] = x1;
        line_x2[i] = x2;
    }
    offset *= -1;

    int max_cnt = 0;
    for(int i = 0; i < n; i++) {
        line_x1[i] += offset;
        line_x2[i] += offset;
        for(int j = line_x1[i]; j < line_x2[i]; j++) {
            arr[j]++;
            max_cnt = max(max_cnt, arr[j]);
        }
        
    }
    cout << max_cnt;
    return 0;
}