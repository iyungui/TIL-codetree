#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];
int n;

void BubbleSort() {
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
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    BubbleSort();

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}