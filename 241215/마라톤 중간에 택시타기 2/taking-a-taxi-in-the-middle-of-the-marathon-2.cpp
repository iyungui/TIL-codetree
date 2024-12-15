#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

#define MAX_N 100

int n;
int x[MAX_N], y[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    
    int min_distance = INT_MAX;
    
    for(int i = 1; i < n - 1; i++) {
        int distance = 0;
        for(int j = 0; j < n - 1; j++) {
            if(i == j) continue;

            if(j + 1 == i) {
                distance += abs(x[j] - x[j + 2]) + abs(y[j] - y[j + 2]);
                // cout << x[j] << " " << x[j + 2] << endl;
            } else {
                distance += abs(x[j] - x[j + 1]) + abs(y[j] - y[j + 1]);
                // cout << x[j] << " " << x[j + 1] << endl;
            }
            // distance += abs(x[j] - x[j + 1]) + abs(y[j] - y[j + 1]);

            // cout << x[j] << " " << y[j] << endl;
            
        }
        // cout << endl;
        min_distance = min(min_distance, distance);
    }
    cout << min_distance;
    return 0;
}