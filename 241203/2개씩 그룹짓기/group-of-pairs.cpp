#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[2 * 1000];
    for(int i = 0; i < 2 * n; i++)
        cin >> arr[i];
    sort(arr, arr + 2 * n);
    cout << arr[n / 2] + arr[n / 2 + 1];
    return 0;
}