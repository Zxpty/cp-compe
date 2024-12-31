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

int n,k,x; read(n,k,x);
// sino podemos usar el 1 y n no es par
if(k==1 && x==1){
  cout<<"NO\n";
}else if(x!=1 && k>1){
  cout<<"YES\n"<<n<<'\n';
  for(int i=0;i<n;i++){
    cout<<1<<' ';
  }cout<<'\n';
}else if(k==2){
  if(n%2==0){
    cout<<"YES\n"<<n/2<<'\n';
    for(int i=0;i<n/2;i++){
      cout<<2<<' ';
    }cout<<'\n';
  }else cout<<"NO\n";
}else{
  cout<<"YES\n"<<n/2<<'\n';
  if(n%2==0){
    for(int i=0;i<n/2;i++)cout<<2<<' ';
    cout<<'\n';
  }else{
    for(int i=0;i<n/2-1;i++)cout<<2<<' ';
    cout<<3<<'\n';
  }
}


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
