// Go to https://artemlos.net/docs/2014/01/MathExploration.pdf before solving 

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1) 
        {
            res = (res * a);
        }
        a = (a * a);
        b >>= 1;
    }
    return res;
}


void solve()
{
    ll k ;
    cin>>k;
    ll dig = 1 , nex = 9 ;
    
    while (k - (dig * nex) > 0) 
    {
        k -= dig * nex;
        nex *= 10;
        dig++;
    }
    ll p = k % dig;
    ll num = power(10 , dig-1) + ((k-1)/dig );
    //cout<<num << "    " <<dig<<"     ";
    if(p!=0)
    {
        num = num / power(10 , dig - p);
    }
    ll ans = num%10;
    cout<< ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
