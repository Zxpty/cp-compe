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
  string s; cin>>s;
  int n = (int)s.size();
  int mn = 0, my =0;
  for(auto x : s){
    if(isupper(x)){
      my++;
    }else{
      mn++;
    }
  }
  if(my>mn){
    for(int i=0;i<n;i++){
      s[i]= toupper(s[i]);
    }
  }else{
    for(int i=0;i<n;i++){
      s[i] = tolower(s[i]);
    }
  }
  cout<<s;
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


