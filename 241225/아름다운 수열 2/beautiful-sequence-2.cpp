#include <iostream>
#include <algorithm>
#include <vector>
#include <string> // for std::to_string
using namespace std;

#define MAX_N 100

int n, m;
int a_arr[MAX_N];
int b_arr[MAX_N];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a_arr[i];
    for (int i = 0; i < m; i++) cin >> b_arr[i];

    sort(b_arr, b_arr + m);

    // 저장소 초기화
    vector<string> a_results;
    vector<string> b_results;

    // a_arr[j] 출력 결과 저장
    for (int i = 0; i < n - m + 1; i++) {
        string temp = "";
        for (int j = i; j < m + i; j++) {
            temp += to_string(a_arr[j]) + " ";
        }
        a_results.push_back(temp);
    }

    // b_arr[i] 출력 결과 저장
    do {
        string temp = "";
        for (int i = 0; i < m; i++) {
            temp += to_string(b_arr[i]) + " ";
        }
        b_results.push_back(temp);
    } while (next_permutation(b_arr, b_arr + m));

    // 동일한 줄 비교
    int same_count = 0;
    for (const auto &a_line : a_results) {
        for (const auto &b_line : b_results) {
            if (a_line == b_line) {
                same_count++;
            }
        }
    }

    // 결과 출력
    cout << same_count << endl;

    return 0;
}