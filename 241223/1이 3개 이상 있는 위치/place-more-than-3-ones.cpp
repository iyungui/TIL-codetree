#include <iostream>
using namespace std;

#define MAX_N 100

int n;
int arr[MAX_N][MAX_N];

bool InRange(int nx, int ny) {
    return nx >= 0 && nx < n && ny >= 0 && ny < n;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int cnt = 0;
            for(int k = 0; k < 4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(InRange(nx, ny) && arr[nx][ny] == 1) cnt++;
            }
            if(cnt >= 3) ans++;
        }
    }
    cout << ans;
    return 0;
}