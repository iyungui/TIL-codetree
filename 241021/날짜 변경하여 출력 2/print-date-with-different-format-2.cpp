#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mm, dd, yyyy;
    // char c;

    // cin >> mm >> c >> dd >> c >> yyyy;
    cin >> mm;
    cin.get();
    cin >> dd;
    cin.get();
    cin >> yyyy;
    cout << yyyy << "." << mm << "." << dd;
    return 0;
}