#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char a;
    cin >> a;
    int idx = -1;

    for (int i = 0; i < 6; i++) {
        if (a == word[i]) {
            idx = i;
        }
    }

    if (idx == -1) cout << "None";
    else cout << idx;
    return 0;
}