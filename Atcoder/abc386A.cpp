#include <algorithm>
#include <bits/stdc++.h>
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
  string s; cin>>s;
  int n = (int)s.size();
  int first_cn = 0;
  for(int i = 0; i<n; i++){
    if(s[i]!='0')first_cn++;
  }
  vi q;
  int l = 0;
  while(l<n){
    int r  = l;
    int cn = 0;
    while(r<n && s[l]==s[r]){
      if(s[r]=='0'){
        cn++;
      }
      r++;
    }
    l = r;
    if(cn>0){
      q.push_back(cn);
    }
  }
  dbg(q);
  int tot = first_cn;
  for(int x : q){
    if(x%2==0){
      tot+=x/2;
    }else tot+=(x+1)/2;
  }
  cout<<tot;
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

