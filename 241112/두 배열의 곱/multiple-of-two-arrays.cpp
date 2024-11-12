#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr_A[3][3];
    int arr_B[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr_A[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr_B[i][j];
        }
    }    

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr_A[i][j] * arr_B[i][j] << " ";
        }
        cout << endl;
    } 
    return 0;
}