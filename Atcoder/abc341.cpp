#include <algorithm>
#include <bits/stdc++.h>
#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
  int n; cin>>n;
  vector<ll> r(n);
  for(auto& x : r) cin>>x;
  vector<pair<ll,ll>> p(n-1); // first : paga  second : gana
  for(int i=0;i<n-1;i++){
  ll paga,gana; cin>>paga>>gana;
    p[i].first = paga;
    p[i].second = gana;
  }
  ll mu = r[0]/p[0].first;
  r[0] = r[0] - (mu*p[0].first);
  r[1] = r[1] + (mu*p[0].second);
  for(int i=1;i+1<n;i++){
    ll mu = r[i]/p[i].first;
    r[i] = r[i] - (mu*p[i].first);
    r[i+1] = r[i+1] + (mu*p[i].second);
    dbg(r[i]);
    dbg(r[i+1]);
  }
  cout<<(ll)r[n-1];
}
int main()
{
    cpu();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


