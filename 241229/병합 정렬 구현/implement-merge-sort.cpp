#include <iostream>
using namespace std;

#define MAX_N 100000

int n;
int arr[MAX_N];
int merged_arr[MAX_N];

void Merge(int low, int mid, int high) {
    int i = low, j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            merged_arr[k++] = arr[i++];
        } else {
            merged_arr[k++] = arr[j++];
        }
    }

    while (i <= mid) merged_arr[k++] = arr[i++];

    while (j <= high) merged_arr[k++] = arr[j++];

    for(int l = low; l <= high; l++) {
        arr[l] = merged_arr[l];
    }
}

void MergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    MergeSort(0, n - 1);
    
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}