#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n , t ;
    cin>>n >> t;
    ll arr[n] ;
    for(ll i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    ll i = 0 , j = 1e18 , mid = 1e9 , ans=0;
    while(i<=j)
    {
        mid = (i+j)/2;
        ll sum = 0 ;
        // can they complete in this mid time 
        for(ll k=0 ; k<n ; k++)
        {
            sum += (mid/arr[k]);
            if(sum >= t)
            {
                break;
            }
        }
        
        if( sum >= t )
        {
            ans=mid;
            j= mid -1;
        }
        else
        {
            i= mid +1 ;
        }
    }
    cout<<ans;
    return 0;
}
