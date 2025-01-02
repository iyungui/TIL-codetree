#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_NUM 1000

using namespace std;

int n, num_cache;
int answer[MAX_NUM];
vector<pair<int, int>> numbers;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num_cache;
        numbers.push_back(make_pair(num_cache, i));
    }

    // pair 의 num_cache 오름차순 정렬
    // 만약 pair 의 num_cache가 같다면, i에 대해서 오름차순 정렬
    sort(numbers.begin(), numbers.end());

    // index correction
    for(int i = 0; i < n; i++)
        answer[numbers[i].second] = i + 1;
    
    for(int i = 0; i < n; i++)
        cout << answer[i] << " ";

    return 0;
}