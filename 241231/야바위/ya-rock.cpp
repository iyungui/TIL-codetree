#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100
#define MAX_NUM 3

int n;
int a[MAX_N], b[MAX_N], c[MAX_N];
int yabawi[MAX_NUM + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    int max_score = 0;

    for(int i = 1; i <= 3; i++) {
        yabawi[1] = yabawi[2] = yabawi[3] = 0;
        yabawi[i] = 1;
        int score = 0;

        for(int j = 0; j < n; j++) {
            swap(yabawi[a[j]], yabawi[b[j]]);

            if(yabawi[c[j]]) score++;
        }

        max_score = max(max_score, score);
    }

    cout << max_score;
    return 0;
}