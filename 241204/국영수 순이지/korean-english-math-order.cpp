#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;
        Student(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
        Student() {};
};

bool cmp(Student a, Student b) {
    // return make_tuple(a.kor, a.eng, a.math) > make_tuple(b.kor, b.eng, b.math);
    bool isPrior = false;
    isPrior = a.kor > b.kor;
    if(a.kor == b.kor) {
        isPrior = a.eng > b.eng;
        if(a.eng == b.eng) {
            isPrior = a.math > b.math;
        }
    }
    return isPrior;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Student students[10];
    for(int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        students[i] = Student(name, kor, eng, math);
    }
    sort(students, students + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].kor << " ";
        cout << students[i].eng << " ";
        cout << students[i].math << endl;
    }
    return 0;
}