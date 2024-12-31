#include <bits/stdc++.h>
#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const ll mod = 1e9+7;
void solve()
{
  string s; cin>>s;
  int n = (int)s.size();
  vector<int> r;
  int left =0;
  while(left<n){
    int right = left;
    int cn = 0;
    while(right<n && s[right]==s[left]){
      cn++;
      right++;
    }
    r.push_back(cn);
    left = right;
  }
  for(int i=1;i<(int)r.size();i+=2){
    cout<<r[i]<<' ';
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

