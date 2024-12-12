#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define MAX_N 100

int arr[MAX_N][2];
int n;

bool Parallel(int x1, int x2, int x3, int y1, int y2, int y3) {
    return (x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3);
}

int DoubleSize() {
    bool isSatisfied = false;
    int max_size = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                int x1 = arr[i][0], x2 = arr[j][0], x3 = arr[k][0];
                int y1 = arr[i][1], y2 = arr[j][1], y3 = arr[k][1];
                if(Parallel(x1, x2, x3, y1, y2, y3)) {
                    isSatisfied = true;
                    int size = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
                    size /= 2;
                    max_size = max(max_size, size);
                }
            }
        }
    }

    if(isSatisfied) return max_size * 2;
    else return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    

    for(int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];

    cout << DoubleSize();
    return 0;
}