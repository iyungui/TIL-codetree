#include <iostream>
using namespace std;
#define MAX_VAL 101

int a[MAX_VAL + 1];

int GetAnswer(int a1, int a2) {
    int return_value = 0;
    for(int i = a1; i <= a2; i++) {
        return_value += a[i - 1];
    }
    return return_value;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << GetAnswer(a1, a2) << endl;
    }
    return 0;
}