#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];
int n;

void InsertionSort() {
    for(int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    cin >> n; 
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    InsertionSort();

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}