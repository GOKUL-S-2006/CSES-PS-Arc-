#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        movies.push_back({end, start}); // Store as (end, start)
    }

    sort(movies.begin(), movies.end()); // Sort by end time

    int count = 0;
    int last_end = 0;
    for (int i = 0; i < n; i++) {
        int start = movies[i].second;
        int end = movies[i].first;
        if (start >= last_end) {
            count++;
            last_end = end;
        }
    }

    cout << count << endl;
}
