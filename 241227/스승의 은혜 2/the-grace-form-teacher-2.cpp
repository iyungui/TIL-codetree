#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_P 1000

int n, b;
int p[MAX_P];

int main() {
    cin >> n >> b;
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n); // 선물 가격 오름차순으로 정렬 

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(b - p[i] > 0) {  // 예산이 남아있다면, 해당 선물 사고, 그 다음 선물
            ans++;
            b -= p[i];
        } else if(b - p[i] <= 0) {  // 해당 선물을 살 예산이 남아있지 않으면, 혹은 0원(해당 선물이 마지막 이라면) 
            if(b - (p[i] / 2) >= 0) {   // 해당 선물에 쿠폰 적용한 값으로 계산해보고, 예산 남으면, 해당 선물 사고, 그 다음 선물
                ans++;
                b -= p[i];      
            } else break;   // 아니면 그만.
        }
    }

    cout << ans;
    return 0;
}