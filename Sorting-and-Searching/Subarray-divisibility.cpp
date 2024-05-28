#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

void solve()
{
    ll n ;
    cin>>n;
    ll arr[n] , prefix_sum[n] , prefix_rem[n];
    unordered_map<ll , ll> is_present;
    is_present[0]++;
    ll count = 0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        prefix_sum[i]=arr[i]+((i!=0)*prefix_sum[i-1]);
        prefix_rem[i]=((prefix_sum[i] % n) + n) % n;
        //cout<<prefix_rem[i]<<" ";
        //ll req = (prefix_rem[i]);
        //cout<<req<<" ";
        count+=is_present[prefix_rem[i]];
        //cout<<count<<" ";
        is_present[prefix_rem[i]]++;
    }
    cout<<count<<endl;
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
