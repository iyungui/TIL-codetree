#include <iostream>
using namespace std;

int n, m;
int answer[100][100] = {};
int count = 1;

int main() {
    cin >> n >> m;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++) {
            if(answer[row][col] == 0) {
                int curr_col = col;
                int curr_row = row;

                while(curr_col >= 0 && curr_row < n) {
                    answer[curr_row][curr_col] = count;

                    curr_col--;
                    curr_row++;
                    count++;
                }
            }
        }
    }
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++)
            cout << answer[row][col] << " ";
        cout << endl;
    }
    return 0;
}