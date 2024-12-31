#include <bits/stdc++.h>
#include <charconv>
#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
template <class T> void read(vector<T> &v);
template <class F, class S> void read(pair<F, S> &p);
template <class T, size_t Z> void read(array<T, Z> &a);
template <class T> void read(T &x) {cin >> x;}
template <class R, class... T> void read(R& r, T&... t){read(r); read(t...);};
template <class T> void read(vector<T> &v) {for(auto& x : v) read(x);}
template <class F, class S> void read(pair<F, S> &p) {read(p.ff, p.ss);}
template <class T, size_t Z> void read(array<T, Z> &a) { for(auto &x : a) read(x); }

typedef long long ll;
typedef vector<int> vi;
const ll mod = 1e9+7;

void solve(){

  ll n,p; 
  read(n);
  read(p);
  vector<ll> A(n); read(A);
  vector<ll> B(n); read(B);
  vector<pair<ll,ll>> r;
  for(int i=0;i<n;i++){
    r.push_back({A[i],B[i]});
  }
  auto x = [&](const pair<ll,ll> &a, const pair<ll,ll>& b){
    if(b.second==a.second){
      return a.first<b.first;
    }
    return a.second<b.second;
  };
  sort(r.begin(),r.end(),x);
  ll ans = p;
  n--;
  for(auto x : r){
    if(n==0)break;
    ll first = min(x.first,n);
    ll second = min(x.second,p);
    ans+= first*second;
    n-=first;
  }
  cout<<ans<<'\n';

}

int main()
{
    cpu();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

