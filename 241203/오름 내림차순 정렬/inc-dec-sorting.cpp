#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    std::sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    std::sort(arr, arr + n, greater<int>());
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}