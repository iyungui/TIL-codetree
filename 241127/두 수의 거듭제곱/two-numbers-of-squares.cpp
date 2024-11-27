#include <iostream>
using namespace std;

int Square(int a, int b) {
    int num = 1;
    for(int i = 0; i < b; i++) {
        num *= a;
    }
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << Square(a, b);
    return 0;
}