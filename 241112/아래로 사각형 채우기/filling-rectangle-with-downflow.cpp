#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int arr[10][10];
    for (int i = 0; i < n; i++) {
        int num = i + 1;
        for (int j = 0; j < n; j++) {
            arr[i][j] = num;
            num += n;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}