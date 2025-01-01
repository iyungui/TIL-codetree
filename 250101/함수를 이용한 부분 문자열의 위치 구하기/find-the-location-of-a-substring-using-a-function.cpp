#include <iostream>
using namespace std;

string text, pattern;

bool IsSubStr(int start_idx) {
    int n = (int) text.size();
    int m = (int) pattern.size();

    if(start_idx + m - 1 >= n) return false;

    for(int j = 0; j < m; j++)
        if(text[start_idx + j] != pattern[j]) return false;

    return true;
}

int FindIndex() {
    for(int i = 0; i < text.length(); i++)
        if(IsSubStr(i)) return i;
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << FindIndex();
    
    return 0;
}