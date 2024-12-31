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
  int n,tr; cin>>n>>tr; // n== numero de cuartos de hotel 
                        // / t numero de transactions
  vector<bool> reserved(n+1,false);
  while(tr--){
    char op;cin>>op;
    if(op=='A'){
      int a,b; cin>>a>>b;
      int cn = 0;
      for(int i=a;i<=b;i++){
        if(!reserved[i]) cn++;
      }
      cout<<cn<<'\n';
    }else if(op=='R'){
      int a; cin>>a;
      reserved[a] = true;
    }
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


