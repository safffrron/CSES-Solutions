#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

void solve()
{
    ll n , q ;
    cin>>n>>q;
    ll arr[n] , xor_sum[n+1];
    xor_sum[0]=0;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        xor_sum[i+1]=xor_sum[i] ^ arr[i];
    }
    while(q--)
    {
        ll l , r ;
        cin>>l>>r;
        //l--; r--;
        ll val = xor_sum[l-1] ^ xor_sum[r];
        cout<<val<<endl;
    }
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
