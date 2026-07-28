#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string name, id;
    int score;

    string maxName, maxId;
    string minName, minId;

    int maxScore = -1;
    int minScore = 101;

    for (int i = 0; i < n; i++) {
        cin >> name >> id >> score;

        if (score > maxScore) {
            maxScore = score;
            maxName = name;
            maxId = id;
        }

        if (score < minScore) {
            minScore = score;
            minName = name;
            minId = id;
        }
    }

    cout << maxName << " " << maxId << endl;
    cout << minName << " " << minId << endl;

    return 0;
}