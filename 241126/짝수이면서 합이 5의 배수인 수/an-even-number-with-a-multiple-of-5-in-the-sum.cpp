#include <iostream>
#include <string>
using namespace std;

bool EvenAnd5Multiple(int n) {
    string str = to_string(n);
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        sum += str[i] - '0';
    }
    return (n % 2 == 0 && sum % 5 == 0);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(EvenAnd5Multiple(n)) cout << "Yes";
    else cout << "No";
    return 0;
}