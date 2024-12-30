#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    // 한 줄로 된 입력을 단어 단위로 읽기
    while (cin >> str) {
        cout << str << endl;
    }
    
    return 0;
}