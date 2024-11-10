#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;

    int arr[100]; // 원소의 값을 저장할 배열

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, a, b, s, e;

    for (int i = 0; i < q; i++) {
        int idx = -1;

        cin >> x;

        if (x == 1) {
            cin >> a;
            cout << arr[a - 1];

        } else if (x == 2) {
            cin >> b;
            for (int j = 0; j < n; j++) {
                if (b == arr[j]) {
                    idx = j + 1;
                    break;
                }
            }

            if (idx == -1) cout << 0;
            else cout << idx;

        } else {
            cin >> s >> e;
            for (int j = s; j <= e; j++) {
                cout << arr[j - 1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}