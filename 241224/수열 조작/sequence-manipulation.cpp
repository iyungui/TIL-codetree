#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> dq;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) dq.push_front(i);

    while(dq.size() > 1) {
        dq.pop_back();
        dq.push_front(dq.back());
        dq.pop_back();
    }
    cout << dq.front();
    return 0;
}