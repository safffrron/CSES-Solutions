#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    //if(b>a) swap(a,b);
    if((a+b > n)||(a==0 && b!=0)||(b==0 && a!=0))
    {
      cout<<"NO"<<endl;
      return;
    }
    
    cout<<"YES"<<endl;
    for(int i=0; i<a+b; i++) cout<<i+1<<" ";
    for(int i=a+b; i<n ; i++) cout<<i+1<<" ";
    cout<<endl;
    
    //if(b<a)
    //for(int i=b; i<(a+b+b); i++) cout<<((i)%(a+b))+1<<" ";
    //else
    for(int i=a; i<(a+b+a); i++) cout<<((i)%(a+b))+1<<" ";
    
    for(int i=a+b; i<n ; i++) cout<<i+1<<" ";
    cout<<endl;
    
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
