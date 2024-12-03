#include <iostream>
#include <string>
using namespace std;

class Boom {
    public:
        string code;
        char color;
        int second;

        Boom(string code, char color, int second) {
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int second;
    cin >> code >> color >> second;
    Boom boom = Boom(code, color, second);
    cout << "code : " << boom.code << endl;
    cout << "color : " << boom.color << endl;
    cout << "second : " << boom.second;
    return 0;
}