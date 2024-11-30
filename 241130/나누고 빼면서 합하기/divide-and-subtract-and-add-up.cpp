#include <iostream>
using namespace std;

int a[100];
int sum = 0;

void AddAElement(int m) {
    while(m >= 1) {
        sum += a[m - 1];
        if(m % 2 == 1) m -= 1;
        else m /= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    AddAElement(m);
    cout << sum;
    return 0;
}