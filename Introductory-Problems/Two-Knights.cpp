#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //input test cases
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll ans1 = (((i * i) * (i * i - 1)) / 2);
        ll ans2 = (4 * (i - 1) * (i - 2));
        ll ans = ans1 - ans2;
        cout << ans << end;
    }
 
    return 0;
}
