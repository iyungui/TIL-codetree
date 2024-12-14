#include <iostream>
using namespace std;
#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[MAX_N];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // bubble sort
    bool sorted;
    do {
        sorted = true;
        for(int i = 1; i < n; i++) {
            if(arr[i] < arr[i - 1]) {
                sorted = false;
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    } while (sorted == false);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}