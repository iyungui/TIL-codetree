#include <iostream>
using namespace std;

#define MAX_R 2000

int n;
int x;  
char a; 
int num = 1000; 
int countings[MAX_R + 1];   

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> a;
        
        if(a == 'L') {
            int end = num - x;  // 도착 지점
            for(int j = num - 1; j >= end; j--) {  // 현재 위치 직전부터 도착 지점까지
                countings[j]++;
            }
            num = end;       
        } else if(a == 'R') {
            int end = num + x;  // 도착 지점
            for(int j = num; j < end; j++) {  // 현재 위치부터 도착 지점 직전까지
                countings[j]++;
            }
            num = end;
        }
    }

    int sum = 0;
    for(int i = 0; i <= MAX_R; i++) {
        if(countings[i] >= 2) {
            sum++;
        }
    }

    cout << sum;
    return 0;
}