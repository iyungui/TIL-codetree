#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height, weight;
        Person(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Person() {};
};

bool cmp(const Person &a, const Person &b) {
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Person people[10];
    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        people[i] = Person(name, height, weight);
    }
    sort(people, people + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }
    return 0;
}