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

  int n; cin>>n;
  vi r(n); read(r);
  const int MX = 26;
  vi freq(MX,0);
  string s = "";
  for(int i=0;i<n;i++){
    for(int j=0;j<26;j++){
      if(freq[j]==r[i]){
        freq[j]++;
        s+=('a'+j);
        break;
      }
    }
  }
  cout<<s<<'\n';

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

