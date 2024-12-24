#include <iostream>
#include <queue>
using namespace std;

int n, k;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    queue<int> q;
    for(int i = 1; i <= n; i++) q.push(i);
    
    while(q.size() != 0) {
        for(int i = 1; i <= k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }    
    return 0;
}