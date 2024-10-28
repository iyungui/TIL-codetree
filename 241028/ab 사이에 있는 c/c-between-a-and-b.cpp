#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    
    // a multiple of 'c'

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cout << "YES";
            break;
        }
        if (i == b) {
            cout << "NO";
        }
    }
    
    return 0;
}