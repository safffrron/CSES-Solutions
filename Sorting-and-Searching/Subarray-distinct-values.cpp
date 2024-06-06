#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

void solve()
{
    ll n , k ;
    cin>>n>>k;
    map<ll , ll > mp;
    ll arr[n] , count = 0, low = 0 , high = 0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    while( high < n )
    {
        mp[arr[high]]++;
        while(mp.size() > k)
        {
            mp[arr[low]]--;
            if(mp[arr[low]]==0)
            {
                mp.erase(arr[low]);
            }
            low ++;
        }
        count += (high-low+1);
        high++;
    }
    
    cout<<count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
