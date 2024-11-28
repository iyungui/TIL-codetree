#include <iostream>
using namespace std;

bool IsExist(int m, int d) {
    for(int i = 0; i <= 12; i++) {
        for(int j = 0; j <= 31; j++) {
            if(i == m && j == d) return true;
            if(i == 2 && j == 28) break; 
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;
    
    if(IsExist(m, d)) cout << "Yes";
    else cout << "No";
    return 0;
}