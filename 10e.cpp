/*
 * Link do Problema: https://codeforces.com/problemset/problem/10/E
 * Nível: 2600 (Avançado)
*/

#include <bits/stdc++.h>

using namespace std;

const int inf = 2e9;
 
int main() {
    int n; cin >> n;
    vector<int> c(n);
    int ans = inf;
    for (int i = 0; i < n; ++i) cin >> c[i];

    for (int i = 1; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = c[j], cnt = 1, tmp = 0, val = c[i - 1] - 1;
            for (int k = 0; k <= j; ++k) {
                if (val < c[k]) continue;
                sum += val - val % c[k];
                cnt += val / c[k];
                val %= c[k];
            }
            val = sum;
            for (int k = 0; k < n; ++k) {
                if (val < c[k]) continue;
                tmp += val / c[k];
                val %= c[k];
            }
            if (cnt < tmp) ans = min(ans, sum);
        }
    }
    if (ans == inf) ans = -1;
    cout << ans << endl;
    return 0;
}