#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 1000

class Price {
    public:
        int p;
        int s;

        Price(int p, int s) {
            this->p = p;
            this->s = s;
        }

        Price() {};
};

int n, b;
Price prices[MAX_N];

bool Cmp(Price a, Price b) {
    if(a.p + a.s == b.p + b.s) return a.p >= b.p;
    return (a.p + a.s) < (b.p + b.s);
}

int main() {
    cin >> n >> b;

    for(int i = 0; i < n; i++) {
        int p, s;
        cin >> p >> s;

        prices[i] = Price(p, s);
    }

    sort(prices, prices + n, Cmp);


    
    int ans = INT_MIN;

    for(int i = 0; i < n; i++) {
        int temp = b;
        int cnt = 0;
        prices[i].p /= 2;

        for(int j = 0; j < n; j++) {
            int total_p = prices[j].p + prices[j].s;
            if(temp - total_p >= 0) {
                temp -= total_p;
                cnt++;
            }
        }

        ans = max(ans, cnt);
        prices[i].p *= 2;
    }


    // for(int i = 0; i < n; i++) {
    //     if(b - (prices[i].p + prices[i].s) > 0) {   // 해당 물건을 사고도 예산이 남아있다면 
    //         // 구매
    //         b -= prices[i].p + prices[i].s;
    //         ans++;

    //     } else if(b - (prices[i].p + prices[i].s) <= 0) {   // 해당 물건을 사려고 할 때, 예산이 부족하거나 마지막(0원) 일 때
    //         // 쿠폰 적용 (마지막으로 담을 물건에 적용)
    //         if(b - ((prices[i].p / 2) + prices[i].s) >= 0) {
    //             b -= prices[i].p / 2 + prices[i].s;
    //             ans++;
    //         } else break;
    //     }
    // }


    cout << ans;
    return 0;
}