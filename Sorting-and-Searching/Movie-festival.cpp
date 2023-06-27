#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

bool comp(pair<int,int>& a, pair<int,int>& b)
{
    return a.second<b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<pair<int,int>> interval(n);
    for(int i=0;i<n;i++)
    {
        cin>> interval[i].first;
        cin>> interval[i].second;
    }
    
    sort(interval.begin(),interval.end(),comp);
    
    int last=0;
    int ans=1;
    
    for(int i=1;i<n;i++)
    {
        if(interval[i].first >= interval[last].second)
        {
            last=i;
            ans++;
        }
    }
    cout<<ans;
    return 0;
} 
