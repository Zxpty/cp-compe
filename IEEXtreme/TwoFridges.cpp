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
  auto check =[&](int t1,int t2,int a, int b){
    if((a<=t1 && t1<=b)||(a<=t2 && t2<=b))return 1;
    return 0;
  };

  int n; cin>>n;
  vector<pair<int,int>> rangos(n);
  for(int i=0;i<n;i++){
    cin>>rangos[i].first>>rangos[i].second;
  }
  bool found = false;
  for(int t1=-100;t1<=100;t1++){
    for(int t2=t1;t2<=100;t2++){
      bool ok = 1; 
      for(int i=0;i<n;i++){
        int x = rangos[i].first;
        int y = rangos[i].second;
        if(!check(t1,t2,x,y))ok = 0;  
      }
      if (ok){
        cout<<t1<<" "<<t2<<'\n';
        found = true;
        return;
      }
    }
  }
  if(!found){
    cout<<"-1\n";
    return;
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

