#include <iostream>
using namespace std;
#define MAX_VAL 101

int a[MAX_VAL];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int a1, a2;
    
    for(int i = 0; i < m; i++) {
        int sum = 0;
        cin >> a1 >> a2;
        for(int j = a1; j <= a2; j++) {
            sum += a[j - 1];
        }
        cout << sum << endl;
    }
    return 0;
}