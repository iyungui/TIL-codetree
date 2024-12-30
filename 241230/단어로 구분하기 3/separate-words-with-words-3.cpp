#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[10];  // 10개의 단어를 저장할 배열
    
    // 10개의 단어 입력받기
    for(int i = 0; i < 10; i++) {
        cin >> words[i];
    }
    
    // 거꾸로 출력
    for(int i = 9; i >= 0; i--) {
        cout << words[i] << '\n';
    }
    
    return 0;
}