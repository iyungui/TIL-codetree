#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int count = 1;  // 1부터 시작하여 홀수/짝수 판별
    
    while (count <= 10) {
        cin >> word;
        
        if (count % 2 == 1) {  // 홀수 번째일 때만 출력
            cout << word << '\n';
        }
        
        count++;
    }
    
    return 0;
}