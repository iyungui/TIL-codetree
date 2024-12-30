#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000

int arr[MAX_N];
int n;

int medianOfThree(int low, int high) {
    int mid = (low + high) / 2;
    
    // 세 값을 정렬하여 중간값을 찾음
    if (arr[low] > arr[mid])
        swap(arr[low], arr[mid]);
    if (arr[mid] > arr[high])
        swap(arr[mid], arr[high]);
    if (arr[low] > arr[mid])
        swap(arr[low], arr[mid]);
    
    // 피봇을 중간 위치로 이동
    swap(arr[mid], arr[high]);
    return arr[high];
}

int Partition(int low, int high) {
    // 피봇 선택
    int pivot;
    if (high - low > 3)
        pivot = medianOfThree(low, high);
    else
        pivot = arr[high];
    
    int i = low - 1;
    
    // 파티션 과정
    for (int j = low; j < high; j++)
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(int low, int high) {
    if (low < high) {  // 원소가 2개 이상이라면, 분할
        int pos;
        pos = Partition(low, high);

        QuickSort(low, pos - 1);
        QuickSort(pos + 1, high);
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    QuickSort(0, n - 1);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
