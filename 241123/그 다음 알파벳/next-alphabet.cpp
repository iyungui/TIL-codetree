#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    cin >> a;
    int next_a;
    if (a == 'z') {
        next_a = (int) 'a';
    } else {
        next_a = (int) a + 1;
    }
    cout << (char) next_a;
    return 0;
}