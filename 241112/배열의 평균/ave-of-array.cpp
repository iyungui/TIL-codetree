#include <iostream>
using namespace std;

int main() {
    int arr_2d[2][4];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr_2d[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    double avg_all = 0;

    for (int i = 0; i < 2; i++) {
        double avg_width = 0;
        for (int j = 0; j < 4; j++) {
            avg_width += arr_2d[i][j];
            avg_all += arr_2d[i][j];
        }
        avg_width /= 4;
        cout << avg_width << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        double avg_length = 0;
        for (int j = 0; j < 2; j++) {
            avg_length += arr_2d[j][i];
        }
        avg_length /= 2;
        cout << avg_length << " ";
    }
    cout << endl;

    avg_all /= 8;

    cout << avg_all;

    return 0;
}