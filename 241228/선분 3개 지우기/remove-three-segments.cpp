#include <iostream>
using namespace std;

#define MAX_NUM 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x[MAX_NUM], y[MAX_NUM];

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {

                int countings[MAX_NUM] = {0};

                for(int l = 0; l < n; l++) {
                    if(l == i || l == j || l == k) {
                        continue;
                    }
                    for(int m = x[l]; m <= y[l]; m++) {
                        countings[m]++;
                    }
                }
                bool satisfied = true;
                for(int j = 0; j <= MAX_NUM; j++) {
                    if(countings[j] > 1) satisfied = false;
                }
                if(satisfied) cnt++;
            }

        }
        
    }
    cout << cnt;
    return 0;
}