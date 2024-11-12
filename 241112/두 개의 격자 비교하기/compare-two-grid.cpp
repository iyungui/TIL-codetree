#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr_1[10][10];
    int arr_2[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr_1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr_2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr_1[i][j] == arr_2[i][j]) cout << 0 << " ";
            else cout << 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}