#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class Seq {
    public:
        int x, num, idx;
        // idx 기본값 설정 방법?
        Seq(int x, int num, int idx) {
            this->x = x;
            this->num = num;
            this->idx = idx;
        }

        Seq() {};
};

int n;
Seq seqs[MAX_N];

bool Cmp_x(Seq a, Seq b) {
    if(a.x == b.x) return a.num < b.num;
    return a.x < b.x;
}

bool Cmp_num(Seq a, Seq b) {
    return a.num < b.num;
}

int main() {
    cin >> n;

    int x, num, idx;
    for(int i = 0; i < n; i++) {
        
        cin >> x;

        seqs[i] = Seq(x, i + 1, i + 1);
    }

    sort(seqs, seqs + n, Cmp_x);

    for(int i = 0; i < n; i++) {
        seqs[i].idx = i + 1;
    }

    sort(seqs, seqs + n, Cmp_num);

    for(int i = 0; i < n; i++) {
        cout << seqs[i].idx << " ";
    }
    return 0;
}