#include <iostream>
using namespace std;

class Agent {
    public:
        char codeName;
        int score;
        Agent(char codeName, int score) {
            this->codeName = codeName;
            this->score = score;
        }
        Agent() {};
};

int main() {
    // 여기에 코드를 작성해주세요.
    Agent agents[5];
    for(int i = 0; i < 5; i++) {
        char codeName;
        int score;
        cin >> codeName >> score;
        agents[i] = Agent(codeName, score);
    }
    int idx = 0;
    int min_score = agents[0].score;
    for(int i = 0; i < 5; i++) {
        if(min_score > agents[i].score) {
            min_score = agents[i].score;
            idx = i;
            // cout << idx << endl;
        }
    }
    // cout << idx;
    cout << agents[idx].codeName << " " << agents[idx].score;
    return 0;
}