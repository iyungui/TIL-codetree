#include <iostream>
using namespace std;

bool ConsecutiveNumSubSequence(int *a, int *b, int n1, int n2) {
    int cnt_a = 0, cnt_b = 0;
    for (int i = cnt_a; i < n1; i++) {
        for(int j = cnt_b; j < n2; j++) {
            if(a[i] == b[j]) {
                cnt_b++;
                cnt_a = i + 1;
                if(cnt_b == n2) return true;
            }
            if(cnt_a == n1) return false;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int a[100], b[100];
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    if(ConsecutiveNumSubSequence(a, b, n1, n2)) cout << "Yes";
    else cout << "No";
    return 0;
}