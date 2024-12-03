#include <iostream>
#include <string>
using namespace std;

class Promise {
    public:
        string secretCode, place;
        int time;

        Promise(string secretCode, string place, int time) {
            this->secretCode = secretCode;
            this->place = place;
            this->time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int c;
    cin >> a >> b >> c;
    Promise promise = Promise(a, b, c);

    cout << "secret code : " << promise.secretCode << endl;
    cout << "meeting point : " << promise.place << endl;
    cout << "time : " << promise.time << endl;
    return 0;
}