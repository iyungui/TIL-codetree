#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_X 100
#define OFFSET 10000  // 충분히 큰 오프셋 값 설정

int n;
// 0: 회색(초기값), 1: 흰색(L), 2: 검은색(R)
int tiles[OFFSET * 2 + 1];  // 음수 인덱스를 위해 충분히 큰 배열 선언

int main() {
    cin >> n;
    
    // 현재 위치 (오프셋을 더해서 시작)
    int curr_pos = OFFSET;
    
    // n번의 명령 처리
    for(int i = 0; i < n; i++) {
        int x;
        char direction;
        cin >> x >> direction;
        
        if(direction == 'L') {
            // 왼쪽으로 x칸 이동하며 흰색으로 변경
            for(int j = 0; j < x; j++) {
                tiles[curr_pos - j] = 1;  // 흰색으로 변경
            }
            curr_pos -= (x - 1);  // 마지막 위치로 이동
        } else {  // direction == 'R'
            // 오른쪽으로 x칸 이동하며 검은색으로 변경
            for(int j = 0; j < x; j++) {
                tiles[curr_pos + j] = 2;  // 검은색으로 변경
            }
            curr_pos += (x - 1);  // 마지막 위치로 이동
        }
    }
    
    // 흰색과 검은색 타일 개수 세기
    int white = 0, black = 0;
    for(int i = 0; i <= OFFSET * 2; i++) {
        if(tiles[i] == 1) white++;
        else if(tiles[i] == 2) black++;
    }
    
    cout << white << " " << black;
    return 0;
}