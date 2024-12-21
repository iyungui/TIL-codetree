#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX_N 20

int n;
int arr[MAX_N];


/* 내 코드 (int를 string으로 만들고.. 처음 두 개 더하고, (더하기 전에 두 문자열 길이 비교하고.. 하나씩 더하고 10넘으면 false)...
 이런식으로 매우 복잡하게 풀이함. 비효율적이고, 알아보기 힘든 코드)
bool IsCarry(int i, int j, int k) {
    int cnt = 0;
    string a = to_string(arr[i]), b = to_string(arr[j]), c = to_string(arr[k]);

    if(a.length() <= b.length()) cnt = a.length();
    else cnt = b.length();
    int l = 1;
    while(cnt) {
        int i = a[a.length() - l] - '0', j = b[b.length() - l] - '0';
        if(i + j >= 10) return false;
        cnt--;
        l++;
    }

    string d = to_string(arr[i] + arr[j]);

    if(d.length() <= c.length()) cnt = d.length();
    else cnt = c.length();
    l = 1;
    while(cnt) {
        int i = d[d.length() - l] - '0', j = c[c.length() - l] - '0';
        if(i + j >= 10) return false;
        cnt--;
        l++;
    }
    return true;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    int max_sum = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(IsCarry(i, j, k))
                    max_sum = max(max_sum, arr[i] + arr[j] + arr[k]);
            }
        }
    }

    cout << max_sum;
    return 0;
}
*/

// 모범답안 코드 (나머지 연산자를 사용하여, 일의 자리, 십의 자리, 백. 천의 자리를 각각 더해보면서, carry가 발생하는지 확인.)
// carry 발생하지 않으면, ans 를 max 값으로 갱신. (매우 직관적이고, 문제 요구사항에 맞는 코드)


bool IsCarry(int i, int j, int k) {
    if(arr[i] % 10 + arr[j] % 10 + arr[k] % 10 >= 10) return true;
    if(arr[i] % 100 / 10 + arr[j] % 100 / 10 + arr[k] % 100 / 10 >= 10) return true;
    if(arr[i] % 1000 / 100 + arr[j] % 1000 / 100 + arr[k] % 1000 / 100 >= 10) return true;
    if(arr[i] % 10000 / 1000 + arr[j] % 10000 / 1000 + arr[k] % 10000 / 1000 >= 10) return true;
    return false;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(IsCarry(i, j, k) == false)
                    ans = max(ans, arr[i] + arr[j] + arr[k]);
            }
        }
    }
    cout << ans;
    return 0;
}