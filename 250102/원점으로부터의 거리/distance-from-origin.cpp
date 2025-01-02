#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class Dot {
    public:
        int x, y;
        int num;
        Dot(int x, int y, int num) {
            this->x = x;
            this->y = y;
            this->num = num;
        }

        Dot() {};
};

int n;
Dot dots[MAX_N];

bool Cmp(Dot a, Dot b) {
    int a_distance = abs(a.x - 0) + abs(a.y - 0);
    int b_distance = abs(b.x - 0) + abs(b.y - 0);

    if(a_distance == b_distance) {
        return a.num < b.num;
    } else return a_distance < b_distance;
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;
        int num = i + 1;
        cin >> x >> y;
        dots[i] = Dot(x, y, num);
    }

    sort(dots, dots + n, Cmp);
    for(int i = 0; i < n; i++) {
        cout << dots[i].num << endl;
    }
    return 0;
}