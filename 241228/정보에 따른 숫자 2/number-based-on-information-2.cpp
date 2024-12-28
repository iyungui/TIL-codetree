#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

#define MAX_T 100

class Alphabet {
    public:
        char c;
        int x;
        Alphabet(char c, int x) {
            this->c = c;
            this->x = x;
        }

        Alphabet() {};
};

int t, a, b;
Alphabet alphabets[MAX_T];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> t >> a >> b;

    for(int i = 0; i < t; i++) {
        char c;
        int x;
        cin >> c >> x;
        alphabets[i] = Alphabet(c, x);
    }

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        int d1 = INT_MAX;
        int d2 = INT_MAX;
        // d1, d2 구하기
        for(int j = 0; j < t; j++) {
            if(alphabets[j].c == 'S')
                d1 = min(d1, abs(i - alphabets[j].x));
            
            if(alphabets[j].c == 'N')
                d2 = min(d2, abs(i - alphabets[j].x));
        }

        if(d1 <= d2) cnt++;
    }

    cout << cnt;
    return 0;
}