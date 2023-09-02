#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int mod = 1e9 +7;

void solve()
{
    int x , n ;
    cin>> x >> n ;
    multiset<int> points ;
    multiset<int> gap;
    points.insert(0);
    points.insert(x);
    
    vector<int> ans ;
    for(int i=0;i<n;i++)
    { 
        int input ;
        cin>> input ;
        points.insert(input);
        
        auto it = points.find(input);
        auto front= next(it ,1);
        auto back = prev(it , 1) ;
        if(i>=1)
        {
            gap.erase(gap.find(abs(*front-*back)));
        }
        int right = abs( *it - *front);
        int left = abs( *it - *back);
        gap.insert(left); gap.insert(right);
        
        auto wtf = --gap.end();
        ans.push_back(*(wtf));
    }
    
    for( auto i : ans)
    {
        cout << i << " ";
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
