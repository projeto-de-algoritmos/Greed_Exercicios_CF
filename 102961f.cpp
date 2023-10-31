/*
 * Autor: Matheus Oliveira
 * Link do Problema: https://codeforces.com/gym/102961/problem/F
 * Nível: Iniciante
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; ++i) {
        cin >> movies[i].second >> movies[i].first;
    }
    sort(movies.begin(), movies.end());
    int j = 0;
    vector<int> last;
    last.push_back(movies[0].first);
    for (int i = 1; i < n; ++i) {
        if (movies[i].second >= last[j]) {
            ++j;
            last.push_back(movies[i].first);
        }
        // cout << movies[i].second << ' ' << movies[i].first << endl;
    }
    cout << last.size() << endl;
}