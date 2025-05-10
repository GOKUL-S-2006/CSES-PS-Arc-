#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, c = 0;

    while(i < a.size() && j < b.size()) {
        if (abs(a[i] - b[j]) <= k){
            c++;
            i++;
            j++;
        } else
        {
         if (a[i]-b[j]> k) {
            j++;
        } else {
            i++;
        }
      }
    }

    cout << c;
}
