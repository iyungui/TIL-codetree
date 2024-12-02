#include <iostream>
using namespace std;
#define MAX_VAL 100

int max_num;
int arr[MAX_VAL + 1];

int GetMaxNum(int n) {
    if(n == 1) return max_num;
    if(max_num < arr[n]) max_num = arr[n];
    return GetMaxNum(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    max_num = arr[1];
    cout << GetMaxNum(n);
    return 0;
}