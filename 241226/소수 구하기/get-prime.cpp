#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
	
	// 1부터 n까지 소수를 구합니다.
	for(int i = 1; i <= n; i++) {
		if(i == 1) continue;
		bool isprime = true;
		
		for(int j = 2; j < i; j++)
			if(i % j == 0) isprime = false;
		
		if(isprime)
			cout << i << " ";
	}
	
	return 0;
}