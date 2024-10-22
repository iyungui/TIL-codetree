#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_math, a_eng, b_math, b_eng;
    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;

    // if (a_math > b_math) {
    //     cout << 'A';
    // } else if (a_math < b_math) {
    //     cout << 'B';
    // } else {
    //     if (a_eng > b_eng) {
    //         cout << 'A';
    //     } else {
    //         cout << 'B';
    //     }
    // }

    if ((a_math > b_math) || ((a_math == b_math) && (a_eng > b_eng))) {
        cout << "A";
    } else {
        cout << "B";
    }


    return 0;
}