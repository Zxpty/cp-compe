#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

// n - cantidad de problemas de acuerdo a cada número 1 2 3 ...
// m - cantidad de soluciones de todos los problemas

// p - los problemas de cada uno
// L - números de lenguajes
//1 - c++
//2 - Java
// 3 - Python

void solve() {
    ll n, m, p, L;
    cin >> n >> m;
    map <int, set<int>> brpt;
    while (m--)
    {
        cin >> p >> L;
        brpt[p].insert(L);
    }
    for (int i = 1; i <= n; ++i) {
        if (brpt[i].count(1) && brpt[i].count(2)) {
            cout << i << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

