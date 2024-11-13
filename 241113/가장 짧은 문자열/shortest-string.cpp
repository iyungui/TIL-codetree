#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, c;
    cin >> a >> b >> c;
    
    int max, min;
    if (a.length() > b.length() && a.length() > c.length()) {
        max = a.length();
    } else if (b.length() > a.length() && b.length() > c.length()) {
        max = b.length();
    } else if (c.length() > a.length() && c.length() > b.length()) {
        max = c.length();
    } else {
        max = 0;
    }

    if (a.length() < b.length() && a.length() < c.length()) {
        min = a.length();
    } else if (b.length() < a.length() && b.length() < c.length()) {
        min = b.length();
    } else if (c.length() < a.length() && c.length() < b.length()) {
        min = c.length();
    } else {
        min = 0;
    }

    if (max == 0) {
        if (a.length() == b.length()) max = a.length();
        else if (a.length() == c.length()) max = a.length();
        else max = b.length();
    }

    if (min == 0) {
        if (a.length() == b.length()) min = a.length();
        else if (a.length() == c.length()) min = a.length();
        else min = b.length();
    }

    cout << max - min;
    return 0;
}