#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    string sum_a, sum_b;
    
    for (int i = 0; i < a.length(); i++) {
        if (isdigit(a[i])) {
            sum_a += a[i];
        } else {
            break;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (isdigit(b[i])) {
            sum_b += b[i];
            
        } else {
            break;
        }
    }
    cout << stoi(sum_a) + stoi(sum_b);
    return 0;
}