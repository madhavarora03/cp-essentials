#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Day {
    int skiing;
    int movies;
    int board_games;
};

bool compareDays(Day& a, Day& b) {
    return (a.skiing + a.movies + a.board_games) > (b.skiing + b.movies + b.board_games);
}

int maxFriends(int n, vector<Day>& days) {
    sort(days.begin(), days.end(), compareDays);
    vector<bool> chosen(n, false);
    int maxTotalFriends = 0;
    int count = 0;

    for (int i = 0; i < n && count < 3; ++i) {
        int index = i % n;
        if (!chosen[index]) {
            maxTotalFriends += days[index].skiing + days[index].movies + days[index].board_games;
            chosen[index] = true;
            count++;
        }
    }

    return maxTotalFriends;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Day> days(n);
        for (int i = 0; i < n; i++) {
            cin >> days[i].skiing;
        }
        for (int i = 0; i < n; i++) {
            cin >> days[i].movies;
        }
        for (int i = 0; i < n; i++) {
            cin >> days[i].board_games;
        }
        cout << maxFriends(n, days) << endl;
    }
}