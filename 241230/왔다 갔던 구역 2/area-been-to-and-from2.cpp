#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

#define OFFSET 1000
#define MAX_X 2000
#define MAX_N 100

int n;
int x[MAX_N + 1];
char a[MAX_N + 1];
int countings[2 * OFFSET + 1] = {0};
int p = 0;

int main() {
   cin >> n;

   for(int i = 1; i <= n; i++) cin >> x[i] >> a[i];

   int min_p = INT_MAX;
   int max_p = INT_MIN;

   for(int i = 1; i <= n; i++) {
       if(a[i] == 'L') {
           for(int j = p; j >= p - x[i]; j--) countings[j + OFFSET]++;
           p -= x[i];
       } else if(a[i] == 'R') {
           for(int j = p; j <= p + x[i]; j++) countings[j + OFFSET]++;
           p += x[i];
       }

       min_p = min(min_p, p);
       max_p = max(max_p, p);
   }

   bool IsFirst = true;
   int sum = 0;
   int temp_a = 0, temp_b = 0;

   for(int i = min_p; i <= max_p; i++) {
       if(countings[i + OFFSET] >= 2 && IsFirst) {
           temp_a = i;
           IsFirst = false;
       } 
       else if(!IsFirst && countings[i + OFFSET] < 2) {
           temp_b = i - 1;
           sum += (temp_b - temp_a);
           IsFirst = true;
       }
   }

   if(!IsFirst) {
       temp_b = max_p;
       sum += (temp_b - temp_a);
   }

   cout << sum - 1;

   return 0;
}