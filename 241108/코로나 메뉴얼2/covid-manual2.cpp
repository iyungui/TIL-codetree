#include <iostream>
using namespace std;

int main() {
    char cold_arr[3] = {};
    int temp_arr[3] = {};
    int count_arr[5] = {};
    // 감기유무와 체온 입력받기. for 3번
    // *A B C D E 에 따라 count_arr 에 저장*
    for (int i = 0; i < 3; i++) {
        cin >> cold_arr[i] >> temp_arr[i];
        if (cold_arr[i] == 'Y' && temp_arr[i] >= 37) {
            count_arr[1]++;
        }
        else if (cold_arr[i] == 'N' && temp_arr[i] >= 37) {
            count_arr[2]++;
        }
        else if (cold_arr[i] == 'Y' && temp_arr[i] < 37) {
            count_arr[3]++;
        }
        else if (cold_arr[i] == 'N' && temp_arr[i] < 37) count_arr[4]++;
        
        if (count_arr[1] >= 2)
            count_arr[5] = 0;
        else
            count_arr[5] = 1;
    }
    // count arr 순환 중 E 가 있으면, E 로 출력.
    for (int i = 1; i <= 4; i++) {
        cout << count_arr[i] << " ";
    }
    if (count_arr[5] == 0) cout << 'E';
    return 0;
}