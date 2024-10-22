#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_age, b_age;
    char a_gender, b_gender;
    cin >> a_age >> a_gender >> b_age >> b_gender;
    
    // if (a_age >= 19 && a_gender == 'M') {
    //     cout << 1;
    // } else if (b_age >= 19 && b_gender == 'M') {
    //     cout << 1;
    // }

    if (a_age >= 19 || b_age >= 19) {
        if (a_gender == 'M' || b_gender == 'M') {
            cout << 1;
        }
    }

    // cout << ((a_gender == 'M') && (a_age >= 19)) || ((b_gender == 'M') && (b_age >= 19));
    return 0;
}