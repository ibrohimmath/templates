#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using ld = long double;
#define each(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << ' ' << x << "\n";
#define sz(a) (int)((a).size())

mt19937 mt(chrono::high_resolution_clock::now().time_since_epoch().count());

void readMain() {
}
// #define READ_MAIN
// #define FILES
// #define TESTCASES
void solve(int &t) {
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    #ifdef FILES
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;

    for (int i = 1; i <= t; i++) {
        solve(i);
        cout << "\n";
    }

    return 0;
}
