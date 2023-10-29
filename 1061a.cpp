/*
 * Autor: Matheus Oliveira
 * Link do Problema: https://codeforces.com/problemset/problem/1061/A
 * Nível: 800 (Iniciante)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s; cin >> n >> s;
    int total = 0, i = 1;
    if (s / n >= 1) {
        i = s / n;
        if (s % n != 0) ++i;
    }
    cout << i << endl;
}