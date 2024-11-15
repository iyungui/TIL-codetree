#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int cnt_ee = 0, cnt_eb = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, 2) == "ee") cnt_ee++;
        if (a.substr(i, 2) == "eb") cnt_eb++;
    }
    cout << cnt_ee << " " << cnt_eb;
    return 0;
}