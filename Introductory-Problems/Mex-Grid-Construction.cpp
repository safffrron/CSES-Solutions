#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));

    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n ; j++)
      {
        vector<bool> flag(200, false);
        
        for(int k=0; k<i; k++) flag[arr[k][j]]=true;
        for(int k=0; k<j; k++) flag[arr[i][k]]=true;
        
        for(int k=0; k<200; k++){ if(!flag[k]){ cout<<k<<" "; arr[i][j]=k; break;}}
        
      }
      cout<<endl;
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
