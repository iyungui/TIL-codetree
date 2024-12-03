#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Address {
    public:
        string name, streetNum, region;
        Address(string name, string streetNum, string region) {
            this->name = name;
            this->streetNum = streetNum;
            this->region = region;
        }
        Address() {};
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Address addresses[10];
    for (int i = 0; i < n; i++) {
        string name, streetNum, region;
        cin >> name >> streetNum >> region;
        addresses[i] = Address(name, streetNum, region);
    }
    string max_name = addresses[0].name;
    int idx = 0;
    for (int i = 1; i < n; i++) {
        int result = max_name.compare(addresses[i].name);
        if(result < 0) {
            max_name = addresses[i].name;
            idx = i;
        }
    }
    cout << "name " << addresses[idx].name << endl;
    cout << "addr " << addresses[idx].streetNum << endl;
    cout << "city " << addresses[idx].region; 
    return 0;
}