#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (n >= 3 && n <= 5) {
        cout << "Spring";
    } else if (n >= 6 && n <= 8) {
        cout << "Summer";
    } else if (n >= 9 && n <= 11) {
        cout << "Fall";
    } else {
        cout << "Winter";
    }
    return 0;
}