#include <iostream>
#include <string>
using namespace std;

class IDAndLevel {
    public:
        string id;
        int level;

        IDAndLevel(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;
    cin >> id >> level;
    IDAndLevel firstID = IDAndLevel();
    IDAndLevel secondID = IDAndLevel(id, level);
    cout << "user " << firstID.id << " lv " << firstID.level << endl;
    cout << "user " << secondID.id << " lv " << secondID.level << endl;
    return 0;
}