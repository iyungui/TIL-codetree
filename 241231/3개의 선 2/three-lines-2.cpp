#include <iostream>
using namespace std;

#define MAX_N 20
#define MAX_X 10

int n;
int x[MAX_N], y[MAX_N];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];


    int ans = 0;
    for(int i = 0; i <= MAX_X; i++) {
        for(int j = 0; j <= MAX_X; j++) {
            for(int k = 0; k <= MAX_X; k++) {  // 세 직선 위치뽑고(1), 그 세 직선의 형태 완전탐색(2)
                bool success = true;

                // x축 평행 3, y축 평행 0 일 때
                for(int l = 0; l < n; l++) {
                    if(x[l] == i || x[l] == j || x[l] == k)
                        continue;
                    success = false;
                }

                if(success) {
                    ans = 1;
                    break;
                }

                success = true;
                // x축 평행 2, y축 평행 1 일 때
                for(int l = 0; l < n; l++) {
                    if(x[l] == i || x[l] == j || y[l] == k)
                        continue;
                    success = false;
                }

                if(success) {
                    ans = 1;
                    break;
                }
        
                success = true;
                // x축 평행 1, y축 평행 2 일 때
                for(int l = 0; l < n; l++) {
                    if(x[l] == i || y[l] == j || y[l] == k)
                        continue;
                    success = false;
                }

                if(success) {
                    ans = 1;
                    break;
                }

                // x축 평행 0, y축 평행 3 일 때
                for(int l = 0; l < n; l++) {
                    if(y[l] == i || y[l] == j || y[l] == k)
                        continue;
                    success = false;
                }

                if(success) {
                    ans = 1;
                    break;
                }

            }
        }
    }

    cout << ans;
    return 0;
}