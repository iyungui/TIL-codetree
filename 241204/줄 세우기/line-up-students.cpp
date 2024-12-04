#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

// height(내) > weight(내) > number(오)

class Student {
    public:
        int number, height, weight;
        Student(int height, int weight, int number) {
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
        Student() {};
};

bool Cmp(Student a, Student b) {
    return make_tuple(-a.height, -a.weight, a.number) < make_tuple(-b.height, -b.weight, b.number);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int number = 0;
    Student students[1000];
    for(int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;
        number++;
        students[i] = Student(height, weight, number);
    }
    sort(students, students + n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << students[i].height << " ";
        cout << students[i].weight << " ";
        cout << students[i].number << endl;
    }
    return 0;
}