#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int a, b, c;
        Student(string name, int a, int b, int c) {
            this->name = name;
            this->a = a;
            this->b = b;
            this->c = c;
        }
        Student() {};
};

bool Cmp(Student a, Student b) {
    return a.a + a.b + a.c < b.a + b.b + b.c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Student students[10];
    for(int i = 0; i < n; i++) {
        string name;
        int a, b, c;
        cin >> name >> a >> b >> c;
        students[i] = Student(name, a, b, c);
    }
    sort(students, students + n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].a << " ";
        cout << students[i].b << " ";
        cout << students[i].c << endl;
    }
    return 0;
}