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
    int id[n];
    int highest=0, streak=0;
    map<int,int> mp;
    int i=0,j=0;
    
    while(j<n)
    {
        cin>>id[j];
        
        if(mp.find(id[j]) == mp.end())
        {
            mp[id[j]]=j;
            streak++;
        }
        else
        {
            i=max(i,mp[id[j]]);
            mp[id[j]]=j;
            streak=j-i;
        }
        
        highest=max(highest,streak);
        j++;
        
    }
    cout<<highest;
    return 0;
}
