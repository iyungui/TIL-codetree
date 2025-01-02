#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class Seq {
    public:
        int x, num;
        Seq(int x, int num) {
            this->x = x;
            this->num = num;
        }

        Seq() {};
};

int n;
Seq seqs[MAX_N];
int answer[MAX_N];

bool Cmp(Seq a, Seq b) {
    if(a.x == b.x) return a.num < b.num;
    return a.x < b.x;
}

int main() {
    cin >> n;

    int x, num;
    for(int i = 0; i < n; i++) {
        cin >> x;
        seqs[i] = Seq(x, i);
    }

    sort(seqs, seqs + n, Cmp);

    for(int i = 0; i < n; i++) {
        // index correction
        answer[seqs[i].num] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    return 0;
}