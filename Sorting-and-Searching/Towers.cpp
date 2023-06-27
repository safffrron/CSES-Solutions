#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, k;
    cin >> n;
    multiset<ll> ans;
    for (ll i = 0; i < n; ++i)
    {
        cin >> k;
 
        if (ans.upper_bound(k) == ans.end())
        {
            ans.insert(k);
        }
        else
        {
 
            ans.erase(ans.upper_bound(k));
            ans.insert(k);
        }
    }
    cout << ans.size();
 
    return 0;
}
