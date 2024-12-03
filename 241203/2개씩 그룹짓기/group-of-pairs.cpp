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
    int result = 0;
    for(int i = 0; i < n; i++)
        result = max(result, arr[i] + arr[2 * n - 1 - i]);
    cout << result;
    return 0;
}

// 원소의 합 중 "최댓값이 최소가 되게 하려면", 합이 고르게 나오도록 분산 시켜야 함.
// 가장 큰 수와 가장 작은 수를 매칭하는 것이 최적의 해를 보장함. 