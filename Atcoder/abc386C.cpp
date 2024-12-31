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
  int k; read(k);
  string s,t; read(s,t);
  int n = (int)s.size();
  int m = (int)t.size();
  if(abs(n-m)>1){
    cout<<"No";
    return;
  }
  if(n==m){
    if(s==t)cout<<"Yes";
    else{
      int cn = 0;
      for(int i=0;i<n;i++){
        dbg(s[i]);
        dbg(t[i]);
        if(s[i]!=t[i])cn++;
      }
      dbg(cn);
      if(cn>1)cout<<"No";
      else cout<<"Yes";
    }
  }else{
    int i = 0, j = 0, cn = 0;
    while(i<n && j<m){
      if(s[i]!=t[j]){
        cn++;
        if(n>m)i++;
        else j++;
      }else{
        i++;
        j++;
      }
    }
    cn+= (n-i)+(m-j);
    if(cn>1)cout<<"No";
    else cout<<"Yes";
  }
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

