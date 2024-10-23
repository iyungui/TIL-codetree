#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_temp, b_temp, c_temp;
    char a_cold, b_cold, c_cold;
    cin >> a_cold >> a_temp >> b_cold >> b_temp >> c_cold >> c_temp;
    
    if (((a_cold == 'Y' && a_temp >= 37) && (b_cold == 'Y' && b_temp >= 37)) || ((a_cold == 'Y' && a_temp >= 37) && (c_cold == 'Y' && c_temp >= 37)) || ((b_cold == 'Y' && b_temp >= 37) && (c_cold == 'Y' && c_temp >= 37))) {
        cout << "E";
    } else {
        cout << "N";
    }
    return 0;
}