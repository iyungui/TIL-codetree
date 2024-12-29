#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int k;  // 문자열 길이
vector<string> arr;  // 1차원 vector로 변경

void RadixSort() {
    k = arr[0].length();  // 첫 문자열의 길이를 k로 설정
    
    for(int pos = k - 1; pos >= 0; pos--) {
        vector<vector<string>> v(10);  // 0-9 숫자별로 문자열을 저장할 2차원 vector

        // 현재 자릿수를 기준으로 숫자별로 분류
        for(int i = 0; i < n; i++) {
            int digit = arr[i][pos] - '0';
            v[digit].push_back(arr[i]);  // pushback이 아닌 push_back
        }

        // 분류된 숫자들을 순서대로 다시 모음
        arr.clear();  // 기존 배열 비우기
        
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < v[i].size(); j++) {  // size가 아닌 size()
                arr.push_back(v[i][j]);
            }
        }
    }
}

int main() {
    cin >> n;
    
    arr.resize(n);  // vector 크기를 n으로 설정
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    RadixSort();

    // 정렬된 결과 출력
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}