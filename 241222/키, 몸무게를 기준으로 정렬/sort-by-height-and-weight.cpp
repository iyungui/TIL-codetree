#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_N 10

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

bool Cmp(Person a, Person b) {
    if(a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Person people[MAX_N];

    for(int i = 0; i < n; i++) {
        string name;
        int h, w;
        cin >> name >> h >> w;
        people[i] = Person(name, h, w);
    }

    sort(people, people + n, Cmp);

    for(int i = 0; i < n; i++)
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    return 0;
}