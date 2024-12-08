#include <iostream>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[MAX_N + 1];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            for(int k = j + 1; k <= n; k++) {
                if(arr[i] <= arr[j] && arr[j] <= arr[k]) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}