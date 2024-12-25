#include <iostream>
using namespace std;

#define MAX_N 100

int n;
int arr[MAX_N];

void SelectionSort() {
    for(int i = 0; i < n; i++) {
        int max = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[max])
                max = j;
        }
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    SelectionSort();

    for (int i = 0; i <= 1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}