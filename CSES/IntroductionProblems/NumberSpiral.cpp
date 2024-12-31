#include <bits/stdc++.h>
#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
  using namespace std;
  typedef long long ll;
  const ll mod = 1e9+7;
  void solve()
  {
    int k,n,w; cin>>k>>n>>w;
    dbg(k);
    dbg(n);
    dbg(w);
    vector<ll> c;
    for(int i=1;i<=w;i++){
      c.push_back(1LL*(i)*k);
    }
    dbg(c);
    ll sum = 0;
    for(int x : c) sum+=x;
    dbg(sum);
    dbg(n);
    if(sum-n>0){
      cout<<sum-n<<'\n';
    }else cout<<0<<'\n';
  // 3 - 6 - 9 - 12 - 15
  // 1
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

