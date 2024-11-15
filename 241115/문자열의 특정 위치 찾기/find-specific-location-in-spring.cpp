#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    int idx = -1;

    cin >> str >> a;

    if (str.find(a) != string::npos) idx = str.find(a);
    
    if (idx == -1) cout << "No";
    else cout << idx;
    return 0;
}