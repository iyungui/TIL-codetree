#include <iostream>
using namespace std;

void lcm(int n, int m) {
    int i = 1;
    int j = 1;
    int lcm;
    while(true) {
        if (n * i == m * j) {
            lcm = m * j;
            break;
        }
        if (n * i < m * j) {
            i++;
        } else {
            j++;
        }
    }
    cout << lcm;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    lcm(n, m);
    return 0;
}

/*
12: 12, 24, 36,...
18: 18, 36...

n: n * 1, n * 2, n * 3,...
m: m * 1, m * 2, ....

if (n * i) == (m * j)
    최소공배수. = m * j
    break;
*/