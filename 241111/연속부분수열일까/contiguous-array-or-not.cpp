#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a_arr[100], b_arr[100];
    
    for (int i = 0; i < n1; i++) {
        cin >> a_arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b_arr[i];
    }
    
    bool isPart = false;
    int idx = 0, cnt = 0;
    for (int i = 0; i < n2; i++) {
        for (int j = idx; j < n1; j++) {
            if (a_arr[j] == b_arr[i]) {
                cnt++;
                idx = j + 1;
                break;
            }
            else cnt = 0;
        }
        if (cnt == n2) isPart = true;
    }
    if (isPart) cout << "Yes";
    else cout << "No";
    return 0;
}