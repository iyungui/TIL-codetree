#include <iostream>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_N + 1];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            double avg = 0;
            if(j == i) {
                cnt++;
                continue;
            }
            for(int k = i; k <= j; k++) {
                avg += arr[k];
            }
            avg /= j - i + 1;
            // cout << avg << endl;
            for(int k = i; k <= j; k++) {
                if(arr[k] == avg) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}