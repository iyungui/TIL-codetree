#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
vector<string> arr;  // 정렬할 문자열들을 저장할 vector

void RadixSort() {
    if(n == 0) return;  // 빈 배열 체크
    
    int k = arr[0].length();  // 지역 변수로 선언
    
    for(int pos = k - 1; pos >= 0; pos--) {
        vector<vector<string>> bucket(10);  // 각 자릿수별 버킷

        // 현재 자릿수 기준으로 버킷에 분류
        for(int i = 0; i < n; i++) {
            if(pos < arr[i].length()) {  // 문자열 길이 체크 추가
                int digit = arr[i][pos] - '0';
                bucket[digit].push_back(arr[i]);
            }
        }

        // 버킷에서 순서대로 다시 원래 배열로 복사
        int idx = 0;
        for(int i = 0; i < 10; i++) {
            for(string& str : bucket[i]) {
                arr[idx++] = str;
            }
        }
    }
}

int main() {
    cin >> n;
    
    // n개의 문자열 입력 받기
    arr.resize(n);  // vector 크기를 n으로 설정
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    RadixSort();

    // 정렬된 결과 출력
    for(const string& s : arr) {
        cout << s << '\n';
    }
    
    return 0;
}