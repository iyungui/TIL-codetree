#include <iostream>
#include <string>
using namespace std;

string arr[10];
char a;

int main() {
    for(int i = 0; i < 10; i++)
        cin >> arr[i];
    
    cin >> a;

    bool satisfied = false;
    for(int i = 0; i < 10; i++) {
        int len = arr[i].length();
        if(arr[i][len - 1] == a) {
            cout << arr[i] << endl;
            satisfied = true;
        }
    }
    if(!satisfied) cout << "None";
    return 0;
}