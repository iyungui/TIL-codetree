#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height;
        double weight;
        Person(string name, int height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Person() {};
};

bool CmpName(Person a, Person b) {
    return a.name < b.name;
}

bool CmpHeight(Person a, Person b) {
    return a.height > b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Person people[5];
    for(int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        people[i] = Person(name, height, weight);
    }
    sort(people, people + 5, CmpName);
    cout << "name" << endl;
    cout << fixed;
    cout.precision(1);
    for(int i = 0; i < 5; i++) {
        cout << people[i].name << " ";
        cout << people[i].height << " ";
        cout << people[i].weight << endl; 
    }
    cout << endl;
    cout << "height" << endl;
    sort(people, people + 5, CmpHeight);
    for(int i = 0; i < 5; i++) {
        cout << people[i].name << " ";
        cout << people[i].height << " ";
        cout << people[i].weight << endl; 
    }

    return 0;
}