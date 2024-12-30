#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 201  // -100 ~ 100 범위를 양수로 변환하면 0~200

int n;
int grid[MAX_SIZE][MAX_SIZE];  // 영역을 표시할 2차원 배열

int main() {
    cin >> n;
    
    // 좌표를 입력받아 직사각형 영역을 표시
    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        // 좌표를 양수로 변환 (음수 좌표 처리를 위해 +100)
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;
        
        // 직사각형 영역을 1로 표시
        for(int x = x1; x < x2; x++) {
            for(int y = y1; y < y2; y++) {
                grid[x][y] = 1;
            }
        }
    }
    
    // 1로 표시된 영역의 개수를 세어 총 넓이 계산
    int area = 0;
    for(int i = 0; i < MAX_SIZE; i++) {
        for(int j = 0; j < MAX_SIZE; j++) {
            if(grid[i][j] == 1) area++;
        }
    }
    
    cout << area;
    return 0;
}