#include <iostream>
using namespace std;

void PrintNum(int n) {
    if(n == 0) return;
    PrintNum(n - 1);
    cout << n << " ";
}

void PrintNumReverse(int n) {
    if(n == 0) return;
    cout << n << " ";
    PrintNumReverse(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintNum(n);
    cout << endl;
    PrintNumReverse(n);
    return 0;
}