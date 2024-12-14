#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];
int n;

void SelectionSort() {
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    SelectionSort();

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}