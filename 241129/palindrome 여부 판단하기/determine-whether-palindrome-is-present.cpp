#include <iostream>
#include <string>
using namespace std;

string a;

bool Palindrome(string &a) {
    int a_reverse[a.length()];
    int idx = 0;
    for(int i = a.length() - 1; i >= 0; i--) {
        a_reverse[idx] = a[i];
        idx++;
    }
    bool satisfied = true;
    for(int i = 0; i < a.length(); i++) {
        if(a_reverse[i] != a[i]) satisfied = false;
    }
    return satisfied;
}

int main() {
    
    cin >> a;

    if(Palindrome(a)) cout << "Yes";
    else cout << "No";
    return 0;
}

// abcba
// a - a, b - b, c