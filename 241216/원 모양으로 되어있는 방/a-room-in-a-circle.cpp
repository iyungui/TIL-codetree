#include <iostream>
#include <climits>
using namespace std;

#define MAX_N 1003

int arr[MAX_N];
int n;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int min_dist = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        int dist = 0;
        for(int j = i; cnt < n; j++) {
            if(j == n) j = 0;
            dist += arr[j] * cnt;
            // cout << arr[j] << " " << cnt << endl;
            cnt++;
        }
        // cout << dist << endl;
        min_dist = min(min_dist, dist);
    }

    cout << min_dist;
    
    return 0;
}