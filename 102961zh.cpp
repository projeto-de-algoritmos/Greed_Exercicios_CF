/*
 * Autor: Matheus Oliveira
 * Link do Problema: https://codeforces.com/gym/102961/problem/ZH
 * Nível: Intermediário Baixo
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; ++i) {
        cin >> movies[i].second >> movies[i].first;
    }
    sort(movies.begin(), movies.end());
    multiset<int> candidates;
    for (int i = 0; i < k; ++i) candidates.insert(0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        auto greater = candidates.upper_bound(movies[i].second);
        if (greater == candidates.begin()) continue;
        --greater;
        candidates.erase(greater);
        candidates.insert(movies[i].first);
        // movies.erase(movies.begin() + i);
        ++ans;
    }
    // cout << n - movies.size() << endl;
    cout << ans << '\n';
}