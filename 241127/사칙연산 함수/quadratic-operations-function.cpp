#include <iostream>
using namespace std;

int Answer(int a, char o, int c) {
    if (o == '+') return a + c;
    else if (o == '-') return a - c;
    else if (o == '/') return a / c;
    else if (o == '*') return a * c;
    else return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;
    int answer = Answer(a, o, c);
    
    if (answer == -1) cout << "False";
    else {
        cout << a << " " << o << " " << c << " = " << answer;
    }
    return 0;
}