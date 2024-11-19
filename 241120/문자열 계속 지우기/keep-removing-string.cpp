#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // B가 A에 없을 때까지 반복
    while (a.find(b) != string::npos) {
        // A에서 첫 번째로 발견된 B의 위치 찾기
        size_t pos = a.find(b);
        // B 삭제
        a.erase(pos, b.length());
    }

    // 결과 출력
    cout << a << endl;
    return 0;
}
