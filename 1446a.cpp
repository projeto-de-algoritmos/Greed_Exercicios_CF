/*
 * Autor: Matheus Oliveira
 * Link do Problema: https://codeforces.com/problemset/problem/1446/A
 * Nível: 1300 (Intermediário Baixo)
*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    ll n, w; cin >> n >> w;
    vector<pair<ll, int>> weights(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> weights[i].first;
        weights[i].second = i + 1;
    }
    sort(weights.begin(), weights.end(), greater<pair<ll, int>>());
    ll c = w / 2 + (w % 2 != 0);
    ll total = 0;
    vector<int> indices;
    for (int i = 0; i < n; ++i) {
        if (total + weights[i].first <= w) {
            total += weights[i].first;
            indices.push_back(weights[i].second);
        }
        if (total >= c) break;
    }
    sort(indices.begin(), indices.end());
    if (indices.size() > 0 && total >= c) {
        cout << indices.size() << '\n';
        for (int i = 0; i < indices.size(); ++i) cout << indices[i] << ' ';
        cout << endl;
    } else cout << -1 << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}