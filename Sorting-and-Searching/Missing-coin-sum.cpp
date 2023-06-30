#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    sort(ar, ar+n);
    ll sum=1;
    
    for(int i=0;i<n;i++)
    {
        if(sum<ar[i])
        {
            break;
        }
        else
        {
            sum+=ar[i];
        }
    }
    
    cout<<sum;
    
    
    return 0;
} 
