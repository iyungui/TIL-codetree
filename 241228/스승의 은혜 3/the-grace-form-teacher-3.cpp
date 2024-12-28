#include <iostream>
#include <algorithm>
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
Price prices[MAX_N + 1];

bool Cmp(Price a, Price b) {
    if(a.p + a.s == b.p + b.s) return a.p > b.p;
    return a.p + a.s < b.p + b.s;
}

int main() {
    cin >> n >> b;

    for(int i = 1; i <= n; i++) {
        int p, s;
        cin >> p >> s;

        prices[i] = Price(p, s);
    }

    sort(prices, prices + n + 1, Cmp);

    int ans = 0;

    for(int i = 1; i <= n; i++) {
        if(b - (prices[i].p + prices[i].s) > 0) {   // 해당 물건을 사고도 예산이 남아있다면 
            // 구매
            b -= prices[i].p + prices[i].s;
            ans++;

        } else if(b - (prices[i].p + prices[i].s) <= 0) {   // 해당 물건을 사려고 할 때, 예산이 부족하거나 마지막(0원) 일 때
            // 쿠폰 적용 (마지막으로 담을 물건에 적용)
            if(b - ((prices[i].p / 2) + prices[i].s) >= 0) {
                b -= prices[i].p / 2 + prices[i].s;
                ans++;
            } else break;
        }
    }
    cout << ans;
    return 0;
}