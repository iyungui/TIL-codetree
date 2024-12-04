#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

class Student {
    public:
        int h, w, num;
        Student(int h, int w, int num) {
            this->h = h;
            this->w = w;
            this->num = num;
        }
        Student() {};
};

bool Cmp(Student a, Student b) {
    return make_tuple(a.h, -a.w) < make_tuple(b.h, -b.w);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num = 0;
    Student students[n];
    for(int i = 0; i < n; i++) {
        int h, w;
        cin >> h >> w;
        num++;
        students[i] = Student(h, w, num);
    }
    sort(students, students + n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << students[i].h << " ";
        cout << students[i].w << " ";
        cout << students[i].num << endl;
    }
    return 0;
}