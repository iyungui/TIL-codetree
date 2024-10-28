#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int i = 0, prod = 1;
    while(true) {
        if(prod == n) {
            break;
        }
        prod *= 2;
        i++;
    }
    cout << i;
    /*
    4 = 2^x

    int i = 1;
    int prod = 1;
    while(true) {
        if (prod == n) {
            break;
        }
        prod *= 2
        i++;
    }

    */

    return 0;
}