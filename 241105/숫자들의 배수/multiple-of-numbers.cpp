#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10];
    int cnt = 0;
    int i = 1;
    while(cnt < 2) {
        cout << i * n << " ";
        if ((i * n) % 5 == 0) {
            cnt++;
        }
        i++;
    }
    return 0;
}