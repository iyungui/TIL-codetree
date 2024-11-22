#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a, b;
    cin >> a >> b;
    int num_a = (int)a, num_b = (int)b;
    cout << num_a + num_b << " ";
    if (num_a > num_b) cout << num_a - num_b;
    else cout << num_b - num_a;
    return 0;
}