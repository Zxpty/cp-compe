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
  int n; cin>>n; // numbres of problems
  int m; cin>>m; // numero de solcuiones escritas
  vector<pair<int,int>> problems(n+1); // problemas completos en java y c++
  while(m--){
    int pro,L; cin>>pro>>L;
    if(L==1){
      problems[pro].first++;
    }else if(L==2){
      problems[pro].second++;
    }
  }
  vector<int> ans;
  for(int i=1;i<=n;i++){
    if(problems[i].first>0 && problems[i].second>0){
      ans.push_back(i);
    }
  }
  for(auto x : ans){
    cout<<x<<'\n';
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


