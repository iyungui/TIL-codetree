#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int count_arr[10] = {};
    while (a > 1) {
        count_arr[a % b]++;
        a /= b;
    }
    
    for (int j = 0; j < b; j++) {
            sum += count_arr[j] * count_arr[j];
    }
    cout << sum;
    return 0;
}