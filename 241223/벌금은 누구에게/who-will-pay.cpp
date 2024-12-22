#include <iostream>
using namespace std;

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;

    cin >> n >> m >> k;

    int arr[MAX_N];
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int students[MAX_N] = {0};

    for(int i = 0; i < m; i++) {
        students[arr[i]]++;
        if(students[arr[i]] == k) {
            cout << arr[i];
            break;
        }
    }
    return 0;
}