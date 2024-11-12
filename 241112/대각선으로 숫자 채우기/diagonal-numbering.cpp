#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100][100];
    int n, m;
    int num = 1, cnt = 0;
    int i = 0, j = 0;

    cin >> n >> m;

    while (true) {
        arr[i][j] = num;

        num++;
        cout << num << endl;
        if (j <= 0 ) {
            i = 0;
            j = ++cnt;
            cout << "cnt: " << cnt << endl;
            continue;
        }
        i++;
        j--;
        if (i == n && cnt == m) break;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}