#include <iostream>
#include <string>
using namespace std;

string a;

bool Palindrome(string &a) {
    for(int i = 0; i < (int) a.size(); i++)
        if(a[i] != a[(int) a.size() - i - 1]) return false;
    return true;
}

int main() {
    
    cin >> a;

    if(Palindrome(a)) cout << "Yes";
    else cout << "No";
    return 0;
}

// abcba
// a - a, b - b, c