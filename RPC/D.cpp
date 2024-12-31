#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main()
{
    cpu();
    ll n, r;
    cin >> n >> r;
    ll num_worse = pow(2, n); // peor numero
    ll team_worse = num_worse - r;
    ll num_rounds = 1;
    if(r == 1) {
        cout << n << endl;
        return 0;
    }
    while (team_worse > 0)
    {
        team_worse--; // enfretarme a un equipo
        if(team_worse % 2 != 0 && team_worse > 1) {
            team_worse--; // mando a un equipo con un top
        } 
        team_worse /= 2; // equipos se enfrentan y quedan la mitad
        num_rounds++;
    }
    cout << num_rounds << endl;
}
