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
    int weight[n];
    ll total=0,m=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
        total+=weight[i];
    }
    
    for(int i=0;i<(1<<n);i++)
    {
        ll sum=0;
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                sum+= weight[j];
            }
            m=min(m,abs(total-sum-sum));
        }
    }
    cout<<m;
    return 0;
} 
