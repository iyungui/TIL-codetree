#include <iostream>
#include <string>
using namespace std;

class Weather {
    public:
        string date, day, info;
        Weather(string date, string day, string info) {
            this->date = date;
            this->day = day;
            this->info = info;
        }
        Weather() {};
};


/* my answer
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Weather weatherList[100];
    for(int i = 0; i < n; i++) {
        string date, day, info;
        cin >> date >> day >> info;
        weatherList[i] = Weather(date, day, info);
    }
    // 가장 근 시일 -> 오름차순 정렬?
    // 동시에, '비가 와야 함'

    // 비가 오니? -> 새 리스트 만들고 -> 그 중에서 가장 작니?
    Weather rainWeatherList[100];
    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(weatherList[i].info == "Rain") {
            rainWeatherList[idx] = weatherList[i];
            idx++;
        }
    }

    int min_idx = 0;

    for(int i = 0; i < idx; i++) {
        if(rainWeatherList[min_idx].date > rainWeatherList[i].date)
            min_idx = i;
    }
    cout << rainWeatherList[min_idx].date << " " << rainWeatherList[min_idx].day << " " << rainWeatherList[min_idx].info;
    return 0;
}
*/

//

Weather ans = Weather("9999-99-99", "", "");

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string date, day, info;
        cin >> date >> day >> info;
        Weather w = Weather(date, day, info);
        if(info == "Rain") {
            if(ans.date >= w.date)
                ans = w;
        }
    }

    cout << ans.date << " " << ans.day << " " << ans.info;
}